
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vmci_ctx {int doorbell_array; } ;
struct dbell_cpt_state {int handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct dbell_cpt_state* FUNC_0 (size_t,int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct vmci_ctx *VAR_4,
     u32 *VAR_5, void **VAR_6)
{
 struct dbell_cpt_state *VAR_7;
 u32 VAR_8, VAR_9;

 VAR_9 = FUNC_2(VAR_4->doorbell_array);
 if (VAR_9 > 0) {
  size_t VAR_10 = VAR_9 * sizeof(*VAR_7);
  if (*VAR_5 < VAR_10) {
   *VAR_5 = VAR_10;
   return VAR_1;
  }

  VAR_7 = FUNC_0(VAR_10, VAR_0);
  if (!VAR_7)
   return VAR_2;

  for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++)
   VAR_7[VAR_8].handle = FUNC_1(
      VAR_4->doorbell_array, VAR_8);

  *VAR_5 = VAR_10;
  *VAR_6 = VAR_7;
 } else {
  *VAR_5 = 0;
  *VAR_6 = ((void*)0);
 }

 return VAR_3;
}
