
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_gpct {unsigned int counter_index; int lock; scalar_t__ mite_chan; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct ni_gpct*,int,int ) ;
 int FUNC_4 (struct ni_gpct*,int,int) ;
 int FUNC_5 (struct ni_gpct*,int ,int ,int) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

int FUNC_8(struct ni_gpct *VAR_0)
{
 unsigned int VAR_1 = VAR_0->counter_index;
 unsigned long VAR_2;

 FUNC_3(VAR_0, 0, 0);
 FUNC_6(&VAR_0->lock, VAR_2);
 if (VAR_0->mite_chan)
  FUNC_2(VAR_0->mite_chan);
 FUNC_7(&VAR_0->lock, VAR_2);
 FUNC_4(VAR_0, 0, 0);

 FUNC_5(VAR_0, FUNC_1(VAR_1),
   FUNC_0(VAR_1), 0x0);
 return 0;
}
