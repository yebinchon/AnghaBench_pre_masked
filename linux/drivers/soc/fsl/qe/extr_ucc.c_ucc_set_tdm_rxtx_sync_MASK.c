
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct qe_mux {int cmxsi1syr; } ;
typedef enum qe_clock { ____Placeholder_qe_clock } qe_clock ;
typedef enum comm_dir { ____Placeholder_comm_dir } comm_dir ;
struct TYPE_2__ {struct qe_mux qmx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,scalar_t__,int) ;
 TYPE_1__* VAR_5 ;
 scalar_t__ FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (scalar_t__,int,int) ;

int FUNC_3(u32 VAR_6, enum qe_clock VAR_7,
     enum comm_dir VAR_8)
{
 int VAR_9;
 u32 VAR_10;
 struct qe_mux *VAR_11;

 VAR_11 = &VAR_5->qmx;

 if (VAR_6 >= VAR_4)
  return -VAR_2;


 if (VAR_8 != VAR_0 && VAR_8 != VAR_1)
  return -VAR_2;

 VAR_9 = FUNC_2(VAR_6, VAR_7, VAR_8);
 if (VAR_9 < 0)
  return -VAR_2;

 VAR_10 = FUNC_1(VAR_8, VAR_6);

 FUNC_0(&VAR_11->cmxsi1syr,
   VAR_3 << VAR_10,
   VAR_9 << VAR_10);

 return 0;
}
