
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int jpeg_quality; scalar_t__* jpeg_qmat_tab; } ;
struct coda_ctx {TYPE_1__ params; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,unsigned int) ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__,int ,int) ;

void FUNC_2(struct coda_ctx *VAR_2, int VAR_3)
{
 unsigned int VAR_4;

 VAR_2->params.jpeg_quality = VAR_3;


 if (VAR_3 > 100)
  VAR_3 = 100;
 if (VAR_3 < 5)
  VAR_3 = 5;





 if (VAR_3 < 50)
  VAR_4 = 5000 / VAR_3;
 else
  VAR_4 = 200 - 2 * VAR_3;

 if (VAR_2->params.jpeg_qmat_tab[0]) {
  FUNC_1(VAR_2->params.jpeg_qmat_tab[0], VAR_1, 64);
  FUNC_0(VAR_2->params.jpeg_qmat_tab[0], VAR_4);
 }
 if (VAR_2->params.jpeg_qmat_tab[1]) {
  FUNC_1(VAR_2->params.jpeg_qmat_tab[1], VAR_0, 64);
  FUNC_0(VAR_2->params.jpeg_qmat_tab[1], VAR_4);
 }
}
