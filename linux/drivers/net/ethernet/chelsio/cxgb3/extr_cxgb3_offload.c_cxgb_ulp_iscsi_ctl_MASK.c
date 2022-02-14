
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ulp_iscsi_info {unsigned int llimit; unsigned int ulimit; unsigned int tagmask; unsigned int* pgsz_factor; unsigned int max_txsz; unsigned int max_rxsz; int pdev; } ;
struct TYPE_3__ {unsigned int tx_pg_size; unsigned int rx_pg_size; } ;
struct TYPE_4__ {TYPE_1__ tp; } ;
struct adapter {int name; TYPE_2__ params; int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;


 unsigned int FUNC_0 (int) ;
 void* FUNC_1 (unsigned int,unsigned int) ;
 int FUNC_2 (char*,int ,unsigned int,...) ;
 unsigned int FUNC_3 (struct adapter*,int ) ;
 int FUNC_4 (struct adapter*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct adapter *VAR_16, unsigned int VAR_17,
         void *VAR_18)
{
 int VAR_19;
 int VAR_20 = 0;
 unsigned int VAR_21 = 0;
 struct ulp_iscsi_info *VAR_22 = VAR_18;

 switch (VAR_17) {
 case 129:
  VAR_22->pdev = VAR_16->pdev;
  VAR_22->llimit = FUNC_3(VAR_16, VAR_3);
  VAR_22->ulimit = FUNC_3(VAR_16, VAR_6);
  VAR_22->tagmask = FUNC_3(VAR_16, VAR_5);

  VAR_21 = FUNC_3(VAR_16, VAR_4);
  for (VAR_19 = 0; VAR_19 < 4; VAR_19++, VAR_21 >>= 8)
   VAR_22->pgsz_factor[VAR_19] = VAR_21 & 0xFF;

  VAR_21 = FUNC_3(VAR_16, VAR_2);
  VAR_22->max_txsz =
  VAR_22->max_rxsz = FUNC_1((VAR_21 >> VAR_13)&VAR_9,
         (VAR_21 >> VAR_14)&VAR_10);




  VAR_21 = FUNC_1(VAR_16->params.tp.tx_pg_size,
     FUNC_3(VAR_16, VAR_0) >> 17);
  VAR_22->max_txsz = FUNC_1(VAR_21, VAR_22->max_txsz);


  VAR_21 = FUNC_3(VAR_16, VAR_1);
  if ((VAR_21 >> VAR_12) != 0x3f60) {
   VAR_21 &= (VAR_11 << VAR_15);
   VAR_21 |= FUNC_0(0x3f60);
   FUNC_2("%s, iscsi set MaxRxData to 16224 (0x%x)\n",
    VAR_16->name, VAR_21);
   FUNC_4(VAR_16, VAR_1, VAR_21);
  }





  VAR_21 = FUNC_1(VAR_16->params.tp.rx_pg_size,
     ((FUNC_3(VAR_16, VAR_1)) >>
    VAR_12) & VAR_8);
  VAR_22->max_rxsz = FUNC_1(VAR_21, VAR_22->max_rxsz);
  break;
 case 128:
  FUNC_4(VAR_16, VAR_5, VAR_22->tagmask);

  for (VAR_19 = 0; VAR_19 < 4; VAR_19++)
   VAR_21 |= (VAR_22->pgsz_factor[VAR_19] & 0xF) << (8 * VAR_19);
  if (VAR_21 && (VAR_21 != FUNC_3(VAR_16, VAR_4))) {
   FUNC_2("%s, setting iscsi pgsz 0x%x, %u,%u,%u,%u\n",
    VAR_16->name, VAR_21, VAR_22->pgsz_factor[0],
    VAR_22->pgsz_factor[1], VAR_22->pgsz_factor[2],
    VAR_22->pgsz_factor[3]);
   FUNC_4(VAR_16, VAR_4, VAR_21);
  }
  break;
 default:
  VAR_20 = -VAR_7;
 }
 return VAR_20;
}
