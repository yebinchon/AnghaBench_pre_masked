
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct seq_file {struct adapter* private; } ;
struct TYPE_2__ {int chip; } ;
struct adapter {TYPE_1__ params; } ;


 int FUNC_0 (scalar_t__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (struct seq_file*,char*,...) ;
 int FUNC_9 (struct adapter*,int ,int ,scalar_t__*) ;
 int FUNC_10 (struct adapter*,scalar_t__*,scalar_t__*,scalar_t__*) ;

__attribute__((used)) static int FUNC_11(struct seq_file *VAR_7, void *VAR_8)
{
 static const char * const VAR_9[] = {
  "TP0", "TP1", "ULP", "SGE0", "SGE1", "NC-SI",
  "ULP0", "ULP1", "ULP2", "ULP3", "SGE", "NC-SI",
  "SGE0-RX", "SGE1-RX"
 };

 int VAR_10;
 struct adapter *VAR_11 = VAR_7->private;
 u16 VAR_12[VAR_0 + VAR_2];
 u16 VAR_13[VAR_0 + VAR_2];
 u32 VAR_14[(4 * (VAR_0 + VAR_2))];
 u16 VAR_15[VAR_0];
 u32 VAR_16[2 * VAR_1], *VAR_17;
 u32 VAR_18[2 * VAR_2];
 u32 *VAR_19 = VAR_14;
 int VAR_20 = FUNC_7(VAR_11->params.chip) ?
    VAR_1 : VAR_2;

 VAR_10 = FUNC_9(VAR_11, FUNC_7(VAR_11->params.chip) ? VAR_3 :
   VAR_4,
   FUNC_0(VAR_14), VAR_14);
 if (!VAR_10) {
  if (FUNC_7(VAR_11->params.chip)) {
   VAR_10 = FUNC_9(VAR_11, VAR_5,
     FUNC_0(VAR_16), VAR_16);
   VAR_17 = VAR_16;
  } else {
   VAR_10 = FUNC_9(VAR_11, VAR_6,
     FUNC_0(VAR_18), VAR_18);
   VAR_17 = VAR_18;
  }
 }
 if (VAR_10)
  return VAR_10;

 FUNC_10(VAR_11, VAR_12, VAR_13, VAR_15);

 FUNC_8(VAR_7,
     "  Queue  Base  Size Thres  RdPtr WrPtr  SOP  EOP Avail\n");
 for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++, VAR_19 += 4)
  FUNC_8(VAR_7, "%7s %5x %5u %5u %6x  %4x %4u %4u %5u\n",
      VAR_9[VAR_10], VAR_12[VAR_10], VAR_13[VAR_10], VAR_15[VAR_10],
      FUNC_1(VAR_19[0]), FUNC_2(VAR_19[1]),
      FUNC_6(VAR_19[3]), FUNC_3(VAR_19[3]),
      FUNC_5(VAR_19[2]) * 16);
 for ( ; VAR_10 < VAR_0 + VAR_20; VAR_10++, VAR_19 += 4, VAR_17 += 2)
  FUNC_8(VAR_7, "%7s %5x %5u %12x  %4x %4u %4u %5u\n",
      VAR_9[VAR_10], VAR_12[VAR_10], VAR_13[VAR_10],
      FUNC_4(VAR_19[0]) & 0x3fff, VAR_17[0] - VAR_12[VAR_10],
      FUNC_6(VAR_19[3]), FUNC_3(VAR_19[3]),
      FUNC_5(VAR_19[2]) * 16);
 return 0;
}
