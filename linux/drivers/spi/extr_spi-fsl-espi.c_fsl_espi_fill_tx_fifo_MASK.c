
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct fsl_espi {unsigned int tx_pos; int tx_done; TYPE_1__* tx_t; scalar_t__ rxskip; int m_transfers; scalar_t__ swab; } ;
struct TYPE_3__ {unsigned int len; void* tx_buf; int transfer_list; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct fsl_espi*,int ,scalar_t__) ;
 int FUNC_2 (struct fsl_espi*,int ,int ) ;
 int FUNC_3 (struct fsl_espi*,int ,int ) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 TYPE_1__* FUNC_5 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_6 (unsigned int,unsigned int) ;
 int FUNC_7 (void const*) ;
 scalar_t__ FUNC_8 (void const*) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_9(struct fsl_espi *VAR_3, u32 VAR_4)
{
 u32 VAR_5;
 unsigned int VAR_6;
 const void *VAR_7;


 VAR_5 = VAR_4 ? FUNC_0(VAR_4) : VAR_1;
start:
 VAR_6 = VAR_3->tx_t->len - VAR_3->tx_pos;
 VAR_7 = VAR_3->tx_t->tx_buf;
 while (VAR_5 >= FUNC_6(4U, VAR_6) && VAR_6) {
  if (VAR_6 >= 4) {
   if (!VAR_7)
    FUNC_1(VAR_3, VAR_0, 0);
   else if (VAR_3->swab)
    FUNC_1(VAR_3, VAR_0,
     FUNC_8(VAR_7 + VAR_3->tx_pos));
   else
    FUNC_1(VAR_3, VAR_0,
     *(u32 *)(VAR_7 + VAR_3->tx_pos));
   VAR_3->tx_pos += 4;
   VAR_6 -= 4;
   VAR_5 -= 4;
  } else if (VAR_6 >= 2 && VAR_7 && VAR_3->swab) {
   FUNC_2(VAR_3, VAR_0,
     FUNC_7(VAR_7 + VAR_3->tx_pos));
   VAR_3->tx_pos += 2;
   VAR_6 -= 2;
   VAR_5 -= 2;
  } else {
   if (!VAR_7)
    FUNC_3(VAR_3, VAR_0, 0);
   else
    FUNC_3(VAR_3, VAR_0,
     *(u8 *)(VAR_7 + VAR_3->tx_pos));
   VAR_3->tx_pos += 1;
   VAR_6 -= 1;
   VAR_5 -= 1;
  }
 }

 if (!VAR_6) {

  if (FUNC_4(&VAR_3->tx_t->transfer_list,
      VAR_3->m_transfers) || VAR_3->rxskip) {
   VAR_3->tx_done = 1;
   return;
  }
  VAR_3->tx_t = FUNC_5(VAR_3->tx_t, VAR_2);
  VAR_3->tx_pos = 0;

  if (VAR_5)
   goto start;
 }
}
