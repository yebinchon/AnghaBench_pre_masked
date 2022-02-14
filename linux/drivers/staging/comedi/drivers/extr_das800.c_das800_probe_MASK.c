
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct das800_board {int name; } ;
struct comedi_device {int class_dev; int spinlock; struct das800_board* board_ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct das800_board const* VAR_9 ;
 int FUNC_0 (struct comedi_device*,int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static const struct das800_board *FUNC_4(struct comedi_device *VAR_10)
{
 const struct das800_board *VAR_11 = VAR_10->board_ptr;
 int VAR_12 = VAR_11 ? VAR_11 - VAR_9 : -VAR_7;
 int VAR_13;
 unsigned long VAR_14;
 FUNC_2(&VAR_10->spinlock, VAR_14);
 VAR_13 = FUNC_0(VAR_10, VAR_8) & 0x3;
 FUNC_3(&VAR_10->spinlock, VAR_14);

 switch (VAR_13) {
 case 0x0:
  if (VAR_12 == VAR_4 || VAR_12 == VAR_0)
   return VAR_11;
  VAR_12 = VAR_4;
  break;
 case 0x2:
  if (VAR_12 == VAR_5 || VAR_12 == VAR_1)
   return VAR_11;
  VAR_12 = VAR_5;
  break;
 case 0x3:
  if (VAR_12 == VAR_6 || VAR_12 == VAR_2 ||
      VAR_12 == VAR_3)
   return VAR_11;
  VAR_12 = VAR_6;
  break;
 default:
  FUNC_1(VAR_10->class_dev, "Board model: 0x%x (unknown)\n",
   VAR_13);
  return ((void*)0);
 }
 FUNC_1(VAR_10->class_dev, "Board model (probed): %s series\n",
  VAR_9[VAR_12].name);

 return &VAR_9[VAR_12];
}
