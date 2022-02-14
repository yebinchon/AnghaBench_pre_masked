
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_private {int window_lock; int mite; scalar_t__ is_m_series; } ;
struct comedi_device {struct ni_private* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (struct comedi_device*,int) ;
 unsigned int FUNC_1 (struct comedi_device*,int) ;
 int FUNC_2 (struct comedi_device*,int,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static unsigned int FUNC_5(struct comedi_device *VAR_2, int VAR_3)
{
 struct ni_private *VAR_4 = VAR_2->private;
 unsigned long VAR_5;
 unsigned int VAR_6;

 if (VAR_4->is_m_series) {
  VAR_6 = FUNC_0(VAR_2, VAR_3);
 } else {
  FUNC_3(&VAR_4->window_lock, VAR_5);
  if (!VAR_4->mite && VAR_3 < 8) {
   VAR_6 = FUNC_1(VAR_2, VAR_3 * 2);
  } else {
   FUNC_2(VAR_2, VAR_3, VAR_0);
   VAR_6 = FUNC_1(VAR_2, VAR_1);
  }
  FUNC_4(&VAR_4->window_lock, VAR_5);
 }
 return VAR_6;
}
