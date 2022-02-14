
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct brcmf_msgbuf_pktids {int array_size; struct brcmf_msgbuf_pktid* array; } ;
struct brcmf_msgbuf_pktid {int dummy; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;


 int VAR_0 ;
 struct brcmf_msgbuf_pktid* FUNC_0 (int ,int,int ) ;
 int FUNC_1 (struct brcmf_msgbuf_pktid*) ;
 struct brcmf_msgbuf_pktids* FUNC_2 (int,int ) ;

__attribute__((used)) static struct brcmf_msgbuf_pktids *
FUNC_3(u32 VAR_1,
    enum dma_data_direction VAR_2)
{
 struct brcmf_msgbuf_pktid *VAR_3;
 struct brcmf_msgbuf_pktids *VAR_4;

 VAR_3 = FUNC_0(VAR_1, sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  return ((void*)0);

 VAR_4 = FUNC_2(sizeof(*VAR_4), VAR_0);
 if (!VAR_4) {
  FUNC_1(VAR_3);
  return ((void*)0);
 }
 VAR_4->array = VAR_3;
 VAR_4->array_size = VAR_1;

 return VAR_4;
}
