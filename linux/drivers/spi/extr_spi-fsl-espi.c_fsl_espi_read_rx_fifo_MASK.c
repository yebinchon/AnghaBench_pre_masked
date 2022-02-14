
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct fsl_espi {unsigned int rx_pos; int rx_done; TYPE_1__* rx_t; int m_transfers; scalar_t__ swab; } ;
struct TYPE_3__ {unsigned int len; int transfer_list; void* rx_buf; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (struct fsl_espi*,int ) ;
 int FUNC_2 (struct fsl_espi*,int ) ;
 int FUNC_3 (struct fsl_espi*,int ) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 TYPE_1__* FUNC_5 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_6 (unsigned int,unsigned int) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_9(struct fsl_espi *VAR_2, u32 VAR_3)
{
 u32 VAR_4 = FUNC_0(VAR_3);
 unsigned int VAR_5;
 void *VAR_6;

start:
 VAR_5 = VAR_2->rx_t->len - VAR_2->rx_pos;
 VAR_6 = VAR_2->rx_t->rx_buf;
 while (VAR_4 >= FUNC_6(4U, VAR_5) && VAR_5) {
  if (VAR_5 >= 4) {
   u32 VAR_7 = FUNC_1(VAR_2, VAR_0);

   if (VAR_6 && VAR_2->swab)
    *(u32 *)(VAR_6 + VAR_2->rx_pos) = FUNC_8(VAR_7);
   else if (VAR_6)
    *(u32 *)(VAR_6 + VAR_2->rx_pos) = VAR_7;
   VAR_2->rx_pos += 4;
   VAR_5 -= 4;
   VAR_4 -= 4;
  } else if (VAR_5 >= 2 && VAR_6 && VAR_2->swab) {
   u16 VAR_8 = FUNC_2(VAR_2, VAR_0);

   *(u16 *)(VAR_6 + VAR_2->rx_pos) = FUNC_7(VAR_8);
   VAR_2->rx_pos += 2;
   VAR_5 -= 2;
   VAR_4 -= 2;
  } else {
   u8 VAR_9 = FUNC_3(VAR_2, VAR_0);

   if (VAR_6)
    *(u8 *)(VAR_6 + VAR_2->rx_pos) = VAR_9;
   VAR_2->rx_pos += 1;
   VAR_5 -= 1;
   VAR_4 -= 1;
  }
 }

 if (!VAR_5) {
  if (FUNC_4(&VAR_2->rx_t->transfer_list,
      VAR_2->m_transfers)) {
   VAR_2->rx_done = 1;
   return;
  }
  VAR_2->rx_t = FUNC_5(VAR_2->rx_t, VAR_1);
  VAR_2->rx_pos = 0;

  if (VAR_4)
   goto start;
 }
}
