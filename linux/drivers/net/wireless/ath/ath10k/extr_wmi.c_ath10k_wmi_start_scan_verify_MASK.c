
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wmi_start_scan_arg {scalar_t__ ie_len; scalar_t__ n_channels; scalar_t__ n_ssids; scalar_t__ n_bssids; int channels; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

int FUNC_1(const struct wmi_start_scan_arg *VAR_4)
{
 if (VAR_4->ie_len > VAR_2)
  return -VAR_0;
 if (VAR_4->n_channels > FUNC_0(VAR_4->channels))
  return -VAR_0;
 if (VAR_4->n_ssids > VAR_3)
  return -VAR_0;
 if (VAR_4->n_bssids > VAR_1)
  return -VAR_0;

 return 0;
}
