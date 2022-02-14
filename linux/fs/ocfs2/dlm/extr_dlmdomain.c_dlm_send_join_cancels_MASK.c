
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_ctxt {int node_num; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct dlm_ctxt*,int) ;
 int FUNC_2 (unsigned long*,int,int) ;
 int FUNC_3 (int ,char*,int,int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct dlm_ctxt *VAR_3,
     unsigned long *VAR_4,
     unsigned int VAR_5)
{
 int VAR_6, VAR_7;
 int VAR_8;

 if (VAR_5 != (FUNC_0(VAR_2) *
    sizeof(unsigned long))) {
  FUNC_3(VAR_1,
       "map_size %u != BITS_TO_LONGS(O2NM_MAX_NODES) %u\n",
       VAR_5, (unsigned)FUNC_0(VAR_2));
  return -VAR_0;
 }

 VAR_6 = 0;
 VAR_8 = -1;
 while ((VAR_8 = FUNC_2(VAR_4, VAR_2,
         VAR_8 + 1)) < VAR_2) {
  if (VAR_8 == VAR_3->node_num)
   continue;

  VAR_7 = FUNC_1(VAR_3, VAR_8);
  if (VAR_7) {
   FUNC_3(VAR_1, "Error return %d cancelling join on "
        "node %d\n", VAR_7, VAR_8);
   if (!VAR_6)
    VAR_6 = VAR_7;
  }
 }

 if (VAR_6)
  FUNC_4(VAR_6);
 return VAR_6;
}
