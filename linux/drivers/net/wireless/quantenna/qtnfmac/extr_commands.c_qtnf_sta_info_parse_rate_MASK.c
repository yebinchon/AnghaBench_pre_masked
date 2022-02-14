
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rate_info {int legacy; int flags; int bw; int nss; int mcs; } ;
struct qlink_sta_info_rate {int bw; int flags; int nss; int mcs; int rate; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(struct rate_info *VAR_12,
    const struct qlink_sta_info_rate *VAR_13)
{
 VAR_12->legacy = FUNC_0(&VAR_13->rate) * 10;

 VAR_12->mcs = VAR_13->mcs;
 VAR_12->nss = VAR_13->nss;
 VAR_12->flags = 0;

 switch (VAR_13->bw) {
 case 129:
  VAR_12->bw = VAR_7;
  break;
 case 134:
  VAR_12->bw = VAR_3;
  break;
 case 132:
 case 131:
  VAR_12->bw = VAR_5;
  break;
 case 130:
  VAR_12->bw = VAR_6;
  break;
 case 128:
  VAR_12->bw = VAR_8;
  break;
 case 133:
  VAR_12->bw = VAR_4;
  break;
 default:
  VAR_12->bw = 0;
  break;
 }

 if (VAR_13->flags & VAR_0)
  VAR_12->flags |= VAR_9;
 else if (VAR_13->flags & VAR_2)
  VAR_12->flags |= VAR_11;

 if (VAR_13->flags & VAR_1)
  VAR_12->flags |= VAR_10;
}
