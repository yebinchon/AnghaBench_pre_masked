
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtio_input {int lock; int evt; int * evts; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct virtio_input*,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct virtio_input *VAR_0)
{
 unsigned long VAR_1;
 int VAR_2, VAR_3;

 FUNC_1(&VAR_0->lock, VAR_1);
 VAR_3 = FUNC_4(VAR_0->evt);
 if (VAR_3 > FUNC_0(VAR_0->evts))
  VAR_3 = FUNC_0(VAR_0->evts);
 for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++)
  FUNC_3(VAR_0, &VAR_0->evts[VAR_2]);
 FUNC_5(VAR_0->evt);
 FUNC_2(&VAR_0->lock, VAR_1);
}
