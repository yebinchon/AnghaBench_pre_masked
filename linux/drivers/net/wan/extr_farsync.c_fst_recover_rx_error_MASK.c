
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fst_port_info {int index; int rxpos; } ;
struct fst_card_info {int dummy; } ;
struct TYPE_2__ {int bits; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char FUNC_0 (struct fst_card_info*,int ) ;
 int FUNC_1 (struct fst_card_info*,int ,unsigned char) ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 int FUNC_2 (int ,char*,...) ;
 TYPE_1__** VAR_4 ;

__attribute__((used)) static void
FUNC_3(struct fst_card_info *VAR_5, struct fst_port_info *VAR_6,
       unsigned char VAR_7, int VAR_8, unsigned short VAR_9)
{
 int VAR_10;
 int VAR_11;

 VAR_11 = VAR_6->index;





 VAR_10 = 0;
 while ((VAR_7 & (VAR_1 | VAR_3)) == 0) {
  FUNC_1(VAR_5, VAR_4[VAR_11][VAR_8].bits, VAR_1);
  VAR_8 = (VAR_8+1) % VAR_2;
  if (++VAR_10 > VAR_2) {
   FUNC_2(VAR_0, "intr_rx: Discarding more bufs"
       " than we have\n");
   break;
  }
  VAR_7 = FUNC_0(VAR_5, VAR_4[VAR_11][VAR_8].bits);
  FUNC_2(VAR_0, "DMA Bits of next buffer was %x\n", VAR_7);
 }
 FUNC_2(VAR_0, "There were %d subsequent buffers in error\n", VAR_10);


 if (!(VAR_7 & VAR_1)) {
  FUNC_1(VAR_5, VAR_4[VAR_11][VAR_8].bits, VAR_1);
  VAR_8 = (VAR_8+1) % VAR_2;
 }
 VAR_6->rxpos = VAR_8;
 return;

}
