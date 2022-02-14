
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_query_region {int dummy; } ;
struct dlm_query_nodeinfo {int dummy; } ;
struct dlm_query_join_request {int dummy; } ;
struct dlm_cancel_join {int dummy; } ;
struct dlm_assert_joined {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int,int ,int *,int *,int *) ;

__attribute__((used)) static int FUNC_2(void)
{
 int VAR_12 = 0;

 VAR_12 = FUNC_1(VAR_3, VAR_2,
     sizeof(struct dlm_query_join_request),
     VAR_9,
     ((void*)0), ((void*)0), &VAR_8);
 if (VAR_12)
  goto bail;

 VAR_12 = FUNC_1(VAR_0, VAR_2,
     sizeof(struct dlm_assert_joined),
     VAR_6,
     ((void*)0), ((void*)0), &VAR_8);
 if (VAR_12)
  goto bail;

 VAR_12 = FUNC_1(VAR_1, VAR_2,
     sizeof(struct dlm_cancel_join),
     VAR_7,
     ((void*)0), ((void*)0), &VAR_8);
 if (VAR_12)
  goto bail;

 VAR_12 = FUNC_1(VAR_5, VAR_2,
     sizeof(struct dlm_query_region),
     VAR_11,
     ((void*)0), ((void*)0), &VAR_8);

 if (VAR_12)
  goto bail;

 VAR_12 = FUNC_1(VAR_4, VAR_2,
     sizeof(struct dlm_query_nodeinfo),
     VAR_10,
     ((void*)0), ((void*)0), &VAR_8);
bail:
 if (VAR_12 < 0)
  FUNC_0();

 return VAR_12;
}
