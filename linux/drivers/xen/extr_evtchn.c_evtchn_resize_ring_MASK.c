
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct per_user_data {int nr_evtchns; int ring_size; int ring_cons_mutex; int ring_prod_lock; int * ring; } ;
typedef int evtchn_port_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (unsigned int,int,int ) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct per_user_data *VAR_2)
{
 unsigned int VAR_3;
 evtchn_port_t *VAR_4, *VAR_5;





 if (VAR_2->nr_evtchns <= VAR_2->ring_size)
  return 0;

 if (VAR_2->ring_size == 0)
  VAR_3 = 64;
 else
  VAR_3 = 2 * VAR_2->ring_size;

 VAR_4 = FUNC_1(VAR_3, sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_5 = VAR_2->ring;





 FUNC_3(&VAR_2->ring_cons_mutex);
 FUNC_5(&VAR_2->ring_prod_lock);
 FUNC_2(VAR_4, VAR_5, VAR_2->ring_size * sizeof(*VAR_2->ring));
 FUNC_2(VAR_4 + VAR_2->ring_size, VAR_5,
        VAR_2->ring_size * sizeof(*VAR_2->ring));

 VAR_2->ring = VAR_4;
 VAR_2->ring_size = VAR_3;

 FUNC_6(&VAR_2->ring_prod_lock);
 FUNC_4(&VAR_2->ring_cons_mutex);

 FUNC_0(VAR_5);

 return 0;
}
