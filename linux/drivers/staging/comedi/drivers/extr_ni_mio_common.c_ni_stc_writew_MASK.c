
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_private {int window_lock; int mite; scalar_t__ is_m_series; } ;
struct comedi_device {struct ni_private* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct comedi_device*,unsigned int,int) ;
 int FUNC_1 (struct comedi_device*,unsigned int,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct comedi_device *VAR_2,
     unsigned int VAR_3, int VAR_4)
{
 struct ni_private *VAR_5 = VAR_2->private;
 unsigned long VAR_6;

 if (VAR_5->is_m_series) {
  FUNC_0(VAR_2, VAR_3, VAR_4);
 } else {
  FUNC_2(&VAR_5->window_lock, VAR_6);
  if (!VAR_5->mite && VAR_4 < 8) {
   FUNC_1(VAR_2, VAR_3, VAR_4 * 2);
  } else {
   FUNC_1(VAR_2, VAR_4, VAR_0);
   FUNC_1(VAR_2, VAR_3, VAR_1);
  }
  FUNC_3(&VAR_5->window_lock, VAR_6);
 }
}
