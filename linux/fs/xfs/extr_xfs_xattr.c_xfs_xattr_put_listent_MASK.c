
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_attr_list_context {scalar_t__ count; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned char* VAR_5 ;
 unsigned char* VAR_6 ;
 char* VAR_7 ;
 int VAR_8 ;
 char* VAR_9 ;
 int VAR_10 ;
 char* VAR_11 ;
 int VAR_12 ;
 char* VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_1 (struct xfs_attr_list_context*,char*,int,unsigned char*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (unsigned char*) ;
 scalar_t__ FUNC_4 (unsigned char*,int ,int) ;

__attribute__((used)) static void
FUNC_5(
 struct xfs_attr_list_context *VAR_17,
 int VAR_18,
 unsigned char *VAR_19,
 int VAR_20,
 int VAR_21)
{
 char *VAR_22;
 int VAR_23;

 FUNC_0(VAR_17->count >= 0);

 if (VAR_18 & VAR_15) {
  if (!FUNC_2(VAR_0))
   return;

  VAR_22 = VAR_11;
  VAR_23 = VAR_12;
 } else if (VAR_18 & VAR_16) {
  VAR_22 = VAR_7;
  VAR_23 = VAR_8;
 } else {
  VAR_22 = VAR_13;
  VAR_23 = VAR_14;
 }

 FUNC_1(VAR_17, VAR_22, VAR_23, VAR_19,
    VAR_20);
 return;
}
