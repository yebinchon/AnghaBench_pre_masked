
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef struct coda_memcpy_desc {int member_0; int member_2; int member_1; } const coda_memcpy_desc ;
struct TYPE_4__ {int vaddr; } ;
struct TYPE_3__ {int * jpeg_qmat_tab; } ;
struct coda_ctx {TYPE_2__ parabuf; TYPE_1__ params; } ;
typedef int luma_dc_value ;
typedef int luma_dc_bits ;
typedef int luma_ac_value ;
typedef int luma_ac_bits ;
typedef int chroma_dc_value ;
typedef int chroma_dc_bits ;
typedef int chroma_ac_value ;
typedef int chroma_ac_bits ;


 int FUNC_0 (struct coda_memcpy_desc const*) ;




 int FUNC_1 (int ,struct coda_memcpy_desc const*) ;





int FUNC_2(struct coda_ctx *VAR_0)
{
 int VAR_1;
 static const struct coda_memcpy_desc VAR_2[8] = {
  { 0, 129, sizeof(129) },
  { 16, 128, sizeof(128) },
  { 32, 131, sizeof(131) },
  { 48, 130, sizeof(130) },
  { 216, 133, sizeof(133) },
  { 232, 132, sizeof(132) },
  { 248, 135, sizeof(135) },
  { 264, 134, sizeof(134) },
 };
 struct coda_memcpy_desc VAR_3[3] = {
  { 512, VAR_0->params.jpeg_qmat_tab[0], 64 },
  { 576, VAR_0->params.jpeg_qmat_tab[1], 64 },
  { 640, VAR_0->params.jpeg_qmat_tab[1], 64 },
 };


 for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_2); VAR_1++)
  FUNC_1(VAR_0->parabuf.vaddr, VAR_2 + VAR_1);


 for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_3); VAR_1++)
  FUNC_1(VAR_0->parabuf.vaddr, VAR_3 + VAR_1);

 return 0;
}
