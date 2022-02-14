
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_enc_idx {int entries_cap; int entries; } ;


 int FUNC_0 (char*,int ,int ) ;

__attribute__((used)) static void FUNC_1(const void *VAR_0, bool VAR_1)
{
 const struct v4l2_enc_idx *VAR_2 = VAR_0;

 FUNC_0("entries=%d, entries_cap=%d\n",
   VAR_2->entries, VAR_2->entries_cap);
}
