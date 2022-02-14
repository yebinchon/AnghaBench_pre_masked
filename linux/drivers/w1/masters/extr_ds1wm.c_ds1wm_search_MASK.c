
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int (* w1_slave_found_callback ) (struct w1_master*,int) ;
typedef int u8 ;
typedef int u64 ;
struct w1_master {int bus_mutex; } ;
struct ds1wm_data {TYPE_1__* pdev; scalar_t__ read_error; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,char*,unsigned int,...) ;
 unsigned char FUNC_2 (struct ds1wm_data*,unsigned char) ;
 scalar_t__ FUNC_3 (struct ds1wm_data*) ;
 int FUNC_4 (struct ds1wm_data*,int ) ;
 int FUNC_5 (struct ds1wm_data*,int ,int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(void *VAR_2, struct w1_master *VAR_3,
   u8 VAR_4, w1_slave_found_callback VAR_5)
{
 struct ds1wm_data *VAR_6 = VAR_2;
 int VAR_7;
 int VAR_8 = -1;
 u64 VAR_9 = 0;
 u64 VAR_10, VAR_11;
 unsigned VAR_12 = 0;
 unsigned int VAR_13 = 0;

 FUNC_0(&VAR_6->pdev->dev, "search begin\n");
 while (1) {
  ++VAR_13;
  if (VAR_13 > 100) {
   FUNC_0(&VAR_6->pdev->dev,
    "too many attempts (100), search aborted\n");
   return;
  }

  FUNC_7(&VAR_3->bus_mutex);
  if (FUNC_3(VAR_6)) {
   FUNC_8(&VAR_3->bus_mutex);
   FUNC_0(&VAR_6->pdev->dev,
    "pass: %d reset error (or no slaves)\n", VAR_13);
   break;
  }

  FUNC_0(&VAR_6->pdev->dev,
   "pass: %d r : %0#18llx writing SEARCH_ROM\n", VAR_13, VAR_9);
  FUNC_4(VAR_6, VAR_4);
  FUNC_0(&VAR_6->pdev->dev,
   "pass: %d entering ASM\n", VAR_13);
  FUNC_5(VAR_6, VAR_0, VAR_1);
  FUNC_0(&VAR_6->pdev->dev,
   "pass: %d beginning nibble loop\n", VAR_13);

  VAR_10 = 0;
  VAR_11 = 0;


  for (VAR_7 = 0; VAR_7 < 16; VAR_7++) {

   unsigned char VAR_14, VAR_15, VAR_16, VAR_17;

   VAR_15 = (VAR_9 >> (4*VAR_7)) & 0xf;
   VAR_15 = ((VAR_15 & 0x1) << 1) |
   ((VAR_15 & 0x2) << 2) |
   ((VAR_15 & 0x4) << 3) |
   ((VAR_15 & 0x8) << 4);


   VAR_14 = FUNC_2(VAR_6, VAR_15);

   if (VAR_6->read_error) {
    FUNC_1(&VAR_6->pdev->dev,
    "pass: %d nibble: %d read error\n", VAR_13, VAR_7);
    break;
   }

   VAR_16 = ((VAR_14 & 0x02) >> 1) |
   ((VAR_14 & 0x08) >> 2) |
   ((VAR_14 & 0x20) >> 3) |
   ((VAR_14 & 0x80) >> 4);

   VAR_17 = ((VAR_14 & 0x01) >> 0) |
   ((VAR_14 & 0x04) >> 1) |
   ((VAR_14 & 0x10) >> 2) |
   ((VAR_14 & 0x40) >> 3);

   VAR_10 |= (unsigned long long) VAR_16 << (VAR_7 * 4);
   VAR_11 |= (unsigned long long) VAR_17 << (VAR_7 * 4);

  }
  if (VAR_6->read_error) {
   FUNC_8(&VAR_3->bus_mutex);
   FUNC_1(&VAR_6->pdev->dev,
    "pass: %d read error, retrying\n", VAR_13);
   break;
  }
  FUNC_0(&VAR_6->pdev->dev,
   "pass: %d r\': %0#18llx d:%0#18llx\n",
   VAR_13, VAR_10, VAR_11);
  FUNC_0(&VAR_6->pdev->dev,
   "pass: %d nibble loop complete, exiting ASM\n", VAR_13);
  FUNC_5(VAR_6, VAR_0, ~VAR_1);
  FUNC_0(&VAR_6->pdev->dev,
   "pass: %d resetting bus\n", VAR_13);
  FUNC_3(VAR_6);
  FUNC_8(&VAR_3->bus_mutex);
  if ((VAR_10 & ((u64)1 << 63)) && (VAR_11 & ((u64)1 << 63))) {
   FUNC_1(&VAR_6->pdev->dev,
    "pass: %d bus error, retrying\n", VAR_13);
   continue;
  }


  FUNC_0(&VAR_6->pdev->dev,
   "pass: %d found %0#18llx\n", VAR_13, VAR_10);
  VAR_5(VAR_3, VAR_10);
  ++VAR_12;
  FUNC_0(&VAR_6->pdev->dev,
   "pass: %d complete, preparing next pass\n", VAR_13);




  VAR_11 &= ~VAR_9;

  VAR_8 = FUNC_6(VAR_11) - 1;
  FUNC_0(&VAR_6->pdev->dev,
   "pass: %d new d:%0#18llx MS discrep bit:%d\n",
   VAR_13, VAR_11, VAR_8);



  if (VAR_8 == -1)
   break;

  VAR_9 = (VAR_9 & ~(~0ull << (VAR_8))) | 1 << VAR_8;
 }
 FUNC_0(&VAR_6->pdev->dev,
  "pass: %d total: %d search done ms d bit pos: %d\n", VAR_13,
  VAR_12, VAR_8);
}
