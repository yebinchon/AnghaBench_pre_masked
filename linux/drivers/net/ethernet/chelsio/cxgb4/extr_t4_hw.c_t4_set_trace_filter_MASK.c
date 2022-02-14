
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct trace_params {int snap_len; int port; int invert; scalar_t__ skip_len; scalar_t__ skip_ofst; scalar_t__ min_len; int* data; int* mask; } ;
struct TYPE_2__ {int chip; } ;
struct adapter {TYPE_1__ params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_8 ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_9 ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_10 ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ VAR_11 ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int) ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (struct adapter*,int ) ;
 int FUNC_10 (struct adapter*,int,int) ;

int FUNC_11(struct adapter *VAR_14, const struct trace_params *VAR_15,
   int VAR_16, int VAR_17)
{
 int VAR_18, VAR_19 = VAR_16 * 4;
 u32 VAR_20, VAR_21, VAR_22;

 if (!VAR_17) {
  FUNC_10(VAR_14, VAR_5 + VAR_19, 0);
  return 0;
 }

 VAR_22 = FUNC_9(VAR_14, VAR_1);
 if (VAR_22 & VAR_13) {




  if (VAR_15->snap_len > ((10 * 1024 / 4) - (2 * 8)))
   return -VAR_0;
 } else {




  if (VAR_15->snap_len > 9600 || VAR_16)
   return -VAR_0;
 }

 if (VAR_15->port > (FUNC_8(VAR_14->params.chip) ? 11 : 19) || VAR_15->invert > 1 ||
     VAR_15->skip_len > VAR_9 || VAR_15->skip_ofst > VAR_11 ||
     VAR_15->min_len > VAR_10)
  return -VAR_0;


 FUNC_10(VAR_14, VAR_5 + VAR_19, 0);

 VAR_16 *= (VAR_4 - VAR_3);
 VAR_20 = VAR_3 + VAR_16;
 VAR_21 = VAR_2 + VAR_16;

 for (VAR_18 = 0; VAR_18 < VAR_12 / 4; VAR_18++, VAR_20 += 4, VAR_21 += 4) {
  FUNC_10(VAR_14, VAR_20, VAR_15->data[VAR_18]);
  FUNC_10(VAR_14, VAR_21, ~VAR_15->mask[VAR_18]);
 }
 FUNC_10(VAR_14, VAR_6 + VAR_19,
       FUNC_2(VAR_15->snap_len) |
       FUNC_5(VAR_15->min_len));
 FUNC_10(VAR_14, VAR_5 + VAR_19,
       FUNC_6(VAR_15->skip_ofst) | FUNC_4(VAR_15->skip_len) |
       (FUNC_8(VAR_14->params.chip) ?
       FUNC_7(VAR_15->port) | VAR_8 | FUNC_3(VAR_15->invert) :
       FUNC_1(VAR_15->port) | VAR_7 |
       FUNC_0(VAR_15->invert)));

 return 0;
}
