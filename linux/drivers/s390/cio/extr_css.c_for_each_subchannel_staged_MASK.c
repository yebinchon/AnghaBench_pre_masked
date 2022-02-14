
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cb_data {int (* fn_known_sch ) (struct subchannel*,void*) ;int (* fn_unknown_sch ) (struct subchannel_id,void*) ;int * set; void* data; } ;


 int FUNC_0 (int *,int *,struct cb_data*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,struct cb_data*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 () ;

int FUNC_5(int (*VAR_4)(struct subchannel *, void *),
          int (*VAR_5)(struct subchannel_id,
          void *), void *VAR_6)
{
 struct cb_data VAR_7;
 int VAR_8;

 VAR_7.data = VAR_6;
 VAR_7.fn_known_sch = VAR_4;
 VAR_7.fn_unknown_sch = VAR_5;

 if (VAR_4 && !VAR_5) {

  VAR_7.set = ((void*)0);
  return FUNC_0(&VAR_3, ((void*)0), &VAR_7,
     VAR_1);
 }

 VAR_7.set = FUNC_4();
 if (!VAR_7.set)

  return FUNC_1(VAR_0, &VAR_7);

 FUNC_2(VAR_7.set);


 VAR_8 = FUNC_0(&VAR_3, ((void*)0), &VAR_7, VAR_1);
 if (VAR_8)
  goto out;

 if (VAR_5)
  VAR_8 = FUNC_1(VAR_2, &VAR_7);
out:
 FUNC_3(VAR_7.set);

 return VAR_8;
}
