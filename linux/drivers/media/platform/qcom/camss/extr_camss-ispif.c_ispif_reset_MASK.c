
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ispif_device {int clock_for_reset; int nclocks_for_reset; int reset_complete; scalar_t__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct ispif_device*) ;
 int FUNC_8 (struct ispif_device*) ;
 unsigned long FUNC_9 (int *,int ) ;
 int FUNC_10 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_11(struct ispif_device *VAR_22)
{
 unsigned long VAR_23;
 u32 VAR_24;
 int VAR_25;

 VAR_25 = FUNC_3(FUNC_7(VAR_22), VAR_20);
 if (VAR_25 < 0)
  return VAR_25;

 VAR_25 = FUNC_3(FUNC_7(VAR_22), VAR_21);
 if (VAR_25 < 0)
  return VAR_25;

 VAR_25 = FUNC_1(VAR_22->nclocks_for_reset,
      VAR_22->clock_for_reset,
      FUNC_8(VAR_22));
 if (VAR_25 < 0)
  return VAR_25;

 FUNC_6(&VAR_22->reset_complete);

 VAR_24 = VAR_18 |
  VAR_3 |
  VAR_19 |
  VAR_4 |
  VAR_5 |
  VAR_6 |
  VAR_7 |
  VAR_9 |
  VAR_10 |
  VAR_11 |
  VAR_12 |
  VAR_13 |
  VAR_14 |
  VAR_8 |
  VAR_15 |
  VAR_16 |
  VAR_17;

 FUNC_10(VAR_24, VAR_22->base + VAR_2);

 VAR_23 = FUNC_9(&VAR_22->reset_complete,
  FUNC_5(VAR_1));
 if (!VAR_23) {
  FUNC_4(FUNC_8(VAR_22), "ISPIF reset timeout\n");
  VAR_25 = -VAR_0;
 }

 FUNC_0(VAR_22->nclocks_for_reset, VAR_22->clock_for_reset);

 FUNC_2(FUNC_7(VAR_22), VAR_20);
 FUNC_2(FUNC_7(VAR_22), VAR_21);

 return VAR_25;
}
