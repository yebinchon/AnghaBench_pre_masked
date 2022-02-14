
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct radio_tea5777 {size_t band; int write_reg; int needs_write; int read_reg; int freq; TYPE_1__* ops; int audmode; } ;
struct TYPE_4__ {int rangehigh; int rangelow; } ;
struct TYPE_3__ {int (* write_reg ) (struct radio_tea5777*,long long) ;} ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 long long VAR_5 ;
 int VAR_6 ;
 long long VAR_7 ;
 int VAR_8 ;
 long long VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 long long VAR_13 ;
 long long VAR_14 ;
 long long VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 long long VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 TYPE_2__* VAR_25 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct radio_tea5777*,long long) ;
 int FUNC_2 (struct radio_tea5777*,int) ;

int FUNC_3(struct radio_tea5777 *VAR_26)
{
 u32 VAR_27;
 int VAR_28;

 VAR_27 = FUNC_0(VAR_26->freq, VAR_25[VAR_26->band].rangelow,
    VAR_25[VAR_26->band].rangehigh);
 VAR_27 = (VAR_27 + 8) / 16;

 switch (VAR_26->band) {
 case 128:
  VAR_26->write_reg &= ~VAR_6;
  VAR_27 = (VAR_27 - VAR_3) / VAR_2;
  VAR_26->write_reg &= ~VAR_22;
  VAR_26->write_reg |= (u64)VAR_27 << VAR_23;
  VAR_26->write_reg &= ~VAR_19;
  VAR_26->write_reg |= VAR_21 <<
      VAR_20;
  VAR_26->write_reg &= ~VAR_17;
  if (VAR_26->audmode == VAR_24)
   VAR_26->write_reg |= 1LL << VAR_18;
  break;
 case 129:
  VAR_26->write_reg &= ~VAR_6;
  VAR_26->write_reg |= (1LL << VAR_7);
  VAR_27 = (VAR_27 - VAR_1) / VAR_0;
  VAR_26->write_reg &= ~VAR_15;
  VAR_26->write_reg |= (u64)VAR_27 << VAR_16;
  VAR_26->write_reg &= ~VAR_4;
  VAR_26->write_reg &= ~VAR_4;
  VAR_26->write_reg &= ~VAR_11;
  VAR_26->write_reg |= VAR_10 << VAR_12;
  VAR_26->write_reg &= ~VAR_8;
  VAR_26->write_reg |= 1LL << VAR_9;
  VAR_26->write_reg &= ~VAR_13;
  VAR_26->write_reg |= 1LL << VAR_14;
  VAR_26->write_reg &= ~VAR_5;
  break;
 }

 VAR_28 = VAR_26->ops->write_reg(VAR_26, VAR_26->write_reg);
 if (VAR_28)
  return VAR_28;

 VAR_26->needs_write = 0;
 VAR_26->read_reg = -1;
 VAR_26->freq = FUNC_2(VAR_26, VAR_27);

 return 0;
}
