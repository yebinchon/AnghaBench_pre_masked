
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_private {int window_lock; } ;
struct comedi_device {struct ni_private* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct comedi_device*,unsigned int,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static inline void FUNC_3(struct comedi_device *VAR_2,
      unsigned int VAR_3, int VAR_4)
{
 struct ni_private *VAR_5 = VAR_2->private;
 unsigned long VAR_6;

 FUNC_1(&VAR_5->window_lock, VAR_6);
 FUNC_0(VAR_2, VAR_4, VAR_0);
 FUNC_0(VAR_2, VAR_3, VAR_1);
 FUNC_2(&VAR_5->window_lock, VAR_6);
}
