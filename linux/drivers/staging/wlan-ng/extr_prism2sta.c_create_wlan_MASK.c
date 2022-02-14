
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlandevice {int nsdcaps; int dot11_desired_bss_type; int tx_timeout; int set_multicast_list; int mlmerequest; int txframe; int reset; int close; int open; struct wlandevice* priv; int msdstate; int nsdname; } ;
struct hfa384x {int nsdcaps; int dot11_desired_bss_type; int tx_timeout; int set_multicast_list; int mlmerequest; int txframe; int reset; int close; int open; struct hfa384x* priv; int msdstate; int nsdname; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct wlandevice*) ;
 struct wlandevice* FUNC_1 (int,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static struct wlandevice *FUNC_2(void)
{
 struct wlandevice *VAR_12 = ((void*)0);
 struct hfa384x *VAR_13 = ((void*)0);


 VAR_12 = FUNC_1(sizeof(*VAR_12), VAR_0);
 VAR_13 = FUNC_1(sizeof(*VAR_13), VAR_0);

 if (!VAR_12 || !VAR_13) {
  FUNC_0(VAR_12);
  FUNC_0(VAR_13);
  return ((void*)0);
 }


 VAR_12->nsdname = VAR_4;
 VAR_12->msdstate = VAR_3;
 VAR_12->priv = VAR_13;
 VAR_12->open = VAR_8;
 VAR_12->close = VAR_6;
 VAR_12->reset = VAR_9;
 VAR_12->txframe = VAR_11;
 VAR_12->mlmerequest = VAR_7;
 VAR_12->set_multicast_list = VAR_10;
 VAR_12->tx_timeout = VAR_5;

 VAR_12->nsdcaps = VAR_2 | VAR_1;


 VAR_13->dot11_desired_bss_type = 1;

 return VAR_12;
}
