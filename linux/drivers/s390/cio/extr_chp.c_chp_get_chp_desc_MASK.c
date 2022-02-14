
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chp_id {int dummy; } ;
struct channel_path_desc_fmt0 {int dummy; } ;
struct channel_path {int lock; int desc; } ;


 int VAR_0 ;
 struct channel_path* FUNC_0 (struct chp_id) ;
 struct channel_path_desc_fmt0* FUNC_1 (int,int ) ;
 int FUNC_2 (struct channel_path_desc_fmt0*,int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

struct channel_path_desc_fmt0 *FUNC_5(struct chp_id VAR_1)
{
 struct channel_path *VAR_2;
 struct channel_path_desc_fmt0 *VAR_3;

 VAR_2 = FUNC_0(VAR_1);
 if (!VAR_2)
  return ((void*)0);
 VAR_3 = FUNC_1(sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  return ((void*)0);

 FUNC_3(&VAR_2->lock);
 FUNC_2(VAR_3, &VAR_2->desc, sizeof(*VAR_3));
 FUNC_4(&VAR_2->lock);
 return VAR_3;
}
