
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocelot_port {int ptp_cmd; struct ocelot* ocelot; } ;
struct ocelot {int ptp_lock; int hwtstamp_config; } ;
struct ifreq {int ifr_data; } ;
struct hwtstamp_config {int tx_type; int rx_filter; scalar_t__ flags; } ;
typedef int cfg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct hwtstamp_config*,int ,int) ;
 scalar_t__ FUNC_1 (int ,struct hwtstamp_config*,int) ;
 int FUNC_2 (int *,struct hwtstamp_config*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct ocelot_port *VAR_5, struct ifreq *VAR_6)
{
 struct ocelot *VAR_7 = VAR_5->ocelot;
 struct hwtstamp_config VAR_8;

 if (FUNC_0(&VAR_8, VAR_6->ifr_data, sizeof(VAR_8)))
  return -VAR_0;


 if (VAR_8.flags)
  return -VAR_1;


 switch (VAR_8.tx_type) {
 case 129:
  VAR_5->ptp_cmd = VAR_4;
  break;
 case 128:



  VAR_5->ptp_cmd = VAR_3;
  break;
 case 130:
  VAR_5->ptp_cmd = 0;
  break;
 default:
  return -VAR_2;
 }

 FUNC_3(&VAR_7->ptp_lock);

 switch (VAR_8.rx_filter) {
 case 145:
  break;
 case 146:
 case 131:
 case 142:
 case 141:
 case 143:
 case 144:
 case 134:
 case 133:
 case 135:
 case 137:
 case 136:
 case 138:
 case 139:
 case 132:
 case 140:
  VAR_8.rx_filter = 139;
  break;
 default:
  FUNC_4(&VAR_7->ptp_lock);
  return -VAR_2;
 }


 FUNC_2(&VAR_7->hwtstamp_config, &VAR_8, sizeof(VAR_8));
 FUNC_4(&VAR_7->ptp_lock);

 return FUNC_1(VAR_6->ifr_data, &VAR_8, sizeof(VAR_8)) ? -VAR_0 : 0;
}
