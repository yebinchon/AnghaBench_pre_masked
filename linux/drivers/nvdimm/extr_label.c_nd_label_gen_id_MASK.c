
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct nd_label_id {char* id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,char*,char*,int *) ;

char *FUNC_1(struct nd_label_id *VAR_2, u8 *VAR_3, u32 VAR_4)
{
 if (!VAR_2 || !VAR_3)
  return ((void*)0);
 FUNC_0(VAR_2->id, VAR_0, "%s-%pUb",
   VAR_4 & VAR_1 ? "blk" : "pmem", VAR_3);
 return VAR_2->id;
}
