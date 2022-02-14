
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcl818_private {unsigned int act_chanlist_len; unsigned int* act_chanlist; scalar_t__ act_chanlist_pos; } ;
struct comedi_device {struct pcl818_private* private; } ;


 unsigned int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;
 int FUNC_2 (struct comedi_device*,unsigned int,unsigned int) ;
 int FUNC_3 (struct comedi_device*,unsigned int,unsigned int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct comedi_device *VAR_0,
         unsigned int *VAR_1,
         unsigned int VAR_2)
{
 struct pcl818_private *VAR_3 = VAR_0->private;
 unsigned int VAR_4 = FUNC_0(VAR_1[0]);
 unsigned int VAR_5;
 unsigned int VAR_6;
 int VAR_7;

 VAR_3->act_chanlist_len = VAR_2;
 VAR_3->act_chanlist_pos = 0;


 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  VAR_5 = FUNC_0(VAR_1[VAR_7]);
  VAR_6 = FUNC_1(VAR_1[VAR_7]);

  VAR_3->act_chanlist[VAR_7] = VAR_5;

  FUNC_2(VAR_0, VAR_5, VAR_6);
 }

 FUNC_4(1);

 FUNC_3(VAR_0, VAR_4, VAR_5);
}
