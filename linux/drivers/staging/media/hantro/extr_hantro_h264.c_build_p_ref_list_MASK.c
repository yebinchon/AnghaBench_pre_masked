
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hantro_h264_reflist_builder {int num_valid; int unordered_reflist; } ;


 int FUNC_0 (int *,int ,int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ,int,int ,int *,struct hantro_h264_reflist_builder const*) ;

__attribute__((used)) static void
FUNC_2(const struct hantro_h264_reflist_builder *VAR_1,
   u8 *VAR_2)
{
 FUNC_0(VAR_2, VAR_1->unordered_reflist,
        sizeof(VAR_1->unordered_reflist));
 FUNC_1(VAR_2, VAR_1->num_valid, sizeof(*VAR_2),
        VAR_0, ((void*)0), VAR_1);
}
