
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcar_sysc_ch {int isr_bit; scalar_t__ chan_offs; int chan_bit; } ;


 unsigned int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned int FUNC_1 (scalar_t__) ;
 int FUNC_2 (unsigned int,scalar_t__) ;
 int FUNC_3 (char*,char*,int ,unsigned int,int) ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (struct rcar_sysc_ch const*,int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(const struct rcar_sysc_ch *VAR_12, bool VAR_13)
{
 unsigned int VAR_14 = FUNC_0(VAR_12->isr_bit);
 unsigned int VAR_15 = FUNC_0(VAR_12->chan_bit);
 unsigned int VAR_16;
 unsigned long VAR_17;
 int VAR_18 = 0;
 int VAR_19;

 FUNC_5(&VAR_11, VAR_17);





 FUNC_2(FUNC_1(VAR_10 + VAR_5) | VAR_14,
    VAR_10 + VAR_5);
 FUNC_2(FUNC_1(VAR_10 + VAR_4) | VAR_14,
    VAR_10 + VAR_4);

 FUNC_2(VAR_14, VAR_10 + VAR_6);


 for (VAR_19 = 0; VAR_19 < VAR_3; VAR_19++) {
  VAR_18 = FUNC_4(VAR_12, VAR_13);
  if (VAR_18)
   goto out;

  VAR_16 = FUNC_1(VAR_10 +
      VAR_12->chan_offs + VAR_2);
  if (!(VAR_16 & VAR_15))
   break;

  FUNC_7(VAR_1);
 }

 if (VAR_19 == VAR_3) {
  VAR_18 = -VAR_0;
  goto out;
 }


 for (VAR_19 = 0; VAR_19 < VAR_9; VAR_19++) {
  if (FUNC_1(VAR_10 + VAR_7) & VAR_14)
   break;
  FUNC_7(VAR_8);
 }

 if (VAR_19 == VAR_9)
  VAR_18 = -VAR_0;

 FUNC_2(VAR_14, VAR_10 + VAR_6);

 out:
 FUNC_6(&VAR_11, VAR_17);

 FUNC_3("sysc power %s domain %d: %08x -> %d\n", VAR_13 ? "on" : "off",
   VAR_12->isr_bit, FUNC_1(VAR_10 + VAR_7), VAR_18);
 return VAR_18;
}
