
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hantro_h264_reflist_builder {int num_valid; int unordered_reflist; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *,int,int,int ,int *,struct hantro_h264_reflist_builder const*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void
FUNC_4(const struct hantro_h264_reflist_builder *VAR_2,
    u8 *VAR_3, u8 *VAR_4)
{
 FUNC_1(VAR_3, VAR_2->unordered_reflist,
        sizeof(VAR_2->unordered_reflist));
 FUNC_2(VAR_3, VAR_2->num_valid, sizeof(*VAR_3),
        VAR_0, ((void*)0), VAR_2);

 FUNC_1(VAR_4, VAR_2->unordered_reflist,
        sizeof(VAR_2->unordered_reflist));
 FUNC_2(VAR_4, VAR_2->num_valid, sizeof(*VAR_4),
        VAR_1, ((void*)0), VAR_2);

 if (VAR_2->num_valid > 1 &&
     !FUNC_0(VAR_4, VAR_3, VAR_2->num_valid))
  FUNC_3(VAR_4[0], VAR_4[1]);
}
