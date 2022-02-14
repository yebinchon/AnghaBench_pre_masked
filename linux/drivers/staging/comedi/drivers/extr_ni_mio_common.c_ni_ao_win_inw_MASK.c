
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_private {int window_lock; } ;
struct comedi_device {struct ni_private* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned short FUNC_0 (struct comedi_device*,int ) ;
 int FUNC_1 (struct comedi_device*,int,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static inline unsigned short FUNC_4(struct comedi_device *VAR_2, int VAR_3)
{
 struct ni_private *VAR_4 = VAR_2->private;
 unsigned long VAR_5;
 unsigned short VAR_6;

 FUNC_2(&VAR_4->window_lock, VAR_5);
 FUNC_1(VAR_2, VAR_3, VAR_0);
 VAR_6 = FUNC_0(VAR_2, VAR_1);
 FUNC_3(&VAR_4->window_lock, VAR_5);
 return VAR_6;
}
