
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct stfsm {int configuration; int booted_from_spi; int stfsm_seq_en_32bit_addr; int dev; int stfsm_seq_write; int stfsm_seq_read; TYPE_1__* info; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,char*,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct stfsm*) ;
 int FUNC_3 (struct stfsm*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct stfsm*,int *) ;
 int FUNC_6 (struct stfsm*,int *,int ) ;
 int VAR_9 ;
 int FUNC_7 (struct stfsm*,int ,int,int,int ) ;

__attribute__((used)) static int FUNC_8(struct stfsm *VAR_10)
{
 uint32_t VAR_11 = VAR_10->info->flags;
 uint8_t VAR_12;
 int VAR_13 = 0;
 bool VAR_14;


 if (VAR_11 & VAR_2)
  VAR_13 = FUNC_6(VAR_10, &VAR_10->stfsm_seq_read,
        VAR_8);
 else
  VAR_13 = FUNC_6(VAR_10, &VAR_10->stfsm_seq_read,
        VAR_7);
 if (VAR_13) {
  FUNC_1(VAR_10->dev,
   "failed to prepare READ sequence with flags [0x%08x]\n",
   VAR_11);
  return VAR_13;
 }


 VAR_13 = FUNC_6(VAR_10, &VAR_10->stfsm_seq_write,
       VAR_6);
 if (VAR_13) {
  FUNC_1(VAR_10->dev,
   "preparing WRITE sequence using flags [0x%08x] failed\n",
   VAR_11);
  return VAR_13;
 }


 FUNC_5(VAR_10, &VAR_9);


 if (VAR_11 & VAR_2) {
  FUNC_4(&VAR_10->stfsm_seq_en_32bit_addr);

  VAR_14 = FUNC_2(VAR_10);
  if (VAR_14 || !VAR_10->booted_from_spi) {




   FUNC_3(VAR_10, 1);
  } else {




   VAR_10->configuration = (VAR_1 |
           VAR_0);
  }
 }




 VAR_12 = (FUNC_0(8) | VAR_5 |
        VAR_4);
 FUNC_7(VAR_10, VAR_3, VAR_12, 1, 0);

 return 0;
}
