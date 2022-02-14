
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct isi_port* driver_data; } ;
struct isi_port {int channel; struct isi_board* card; } ;
struct isi_board {unsigned long base; int shift_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (struct isi_board*) ;
 int FUNC_2 (int,unsigned long) ;
 int FUNC_3 (struct isi_board*) ;

__attribute__((used)) static int FUNC_4(struct tty_struct *VAR_2, int VAR_3)
{
 struct isi_port *VAR_4 = VAR_2->driver_data;
 struct isi_board *VAR_5 = VAR_4->card;
 unsigned long VAR_6 = VAR_5->base;

 if (VAR_3 == -1)
  return -VAR_1;

 if (!FUNC_1(VAR_5))
  return -VAR_0;

 FUNC_2(0x8000 | ((VAR_4->channel) << (VAR_5->shift_count)) | 0x3, VAR_6);
 FUNC_2((VAR_3 & 0xff) << 8 | 0x00, VAR_6);
 FUNC_2((VAR_3 & 0xff00u), VAR_6);
 FUNC_0(VAR_6);

 FUNC_3(VAR_5);
 return 0;
}
