
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct das1800_board {unsigned char id; int name; } const das1800_board ;
struct comedi_device {int class_dev; int board_name; struct das1800_board const* board_ptr; scalar_t__ iobase; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ VAR_6 ;






 int VAR_7 ;
 struct das1800_board const* VAR_8 ;
 int FUNC_0 (int ,char*,unsigned char,...) ;
 int FUNC_1 (int ,char*,unsigned char,int ) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_9)
{
 const struct das1800_board *VAR_10 = VAR_9->board_ptr;
 unsigned char VAR_11;

 VAR_11 = (FUNC_2(VAR_9->iobase + VAR_6) >> 4) & 0xf;







 if (VAR_10) {
  if (VAR_10->id == VAR_11)
   return 0;
  FUNC_0(VAR_9->class_dev,
   "probed id does not match board id (0x%x != 0x%x)\n",
   VAR_11, VAR_10->id);
  return -VAR_7;
 }






 switch (VAR_11) {
 case 128:

  VAR_10 = &VAR_8[VAR_3];
  break;
 case 130:

  VAR_10 = &VAR_8[VAR_5];
  break;
 case 133:

  VAR_10 = &VAR_8[VAR_0];
  break;
 case 131:

  VAR_10 = &VAR_8[VAR_4];
  break;
 case 129:

  VAR_10 = &VAR_8[VAR_2];
  break;
 case 132:

  VAR_10 = &VAR_8[VAR_1];
  break;
 default:
  FUNC_0(VAR_9->class_dev, "invalid probe id 0x%x\n", VAR_11);
  return -VAR_7;
 }
 VAR_9->board_ptr = VAR_10;
 VAR_9->board_name = VAR_10->name;
 FUNC_1(VAR_9->class_dev,
   "probed id 0x%0x: %s series (not recommended)\n",
   VAR_11, VAR_10->name);
 return 0;
}
