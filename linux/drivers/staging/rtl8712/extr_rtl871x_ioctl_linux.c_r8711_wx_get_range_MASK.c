
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int length; } ;
union iwreq_data {TYPE_1__ data; } ;
typedef size_t u16 ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct TYPE_7__ {int qual; int level; int updated; scalar_t__ noise; } ;
struct TYPE_6__ {int qual; int level; int noise; int updated; } ;
struct iw_range {int throughput; int num_bitrates; int we_version_source; int num_channels; size_t num_frequency; int enc_capa; TYPE_4__* freq; int we_version_compiled; scalar_t__ pm_capa; int max_frag; int min_frag; int * bitrate; TYPE_3__ avg_qual; TYPE_2__ max_qual; } ;
struct TYPE_8__ {int i; int m; int e; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int* VAR_10 ;
 int FUNC_0 (struct iw_range*,int ,int) ;
 int * VAR_11 ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_12,
    struct iw_request_info *VAR_13,
    union iwreq_data *VAR_14, char *VAR_15)
{
 struct iw_range *VAR_16 = (struct iw_range *)VAR_15;
 u16 VAR_17;
 int VAR_18;

 VAR_14->data.length = sizeof(*VAR_16);
 FUNC_0(VAR_16, 0, sizeof(*VAR_16));
 VAR_16->throughput = 5 * 1000 * 1000;



 VAR_16->max_qual.qual = 100;
 VAR_16->max_qual.level = 100;
 VAR_16->max_qual.noise = 100;
 VAR_16->max_qual.updated = 7;
 VAR_16->avg_qual.qual = 92;

 VAR_16->avg_qual.level = 0x100 - 78;
 VAR_16->avg_qual.noise = 0;
 VAR_16->avg_qual.updated = 7;
 VAR_16->num_bitrates = VAR_8;
 for (VAR_18 = 0; VAR_18 < VAR_8 && VAR_18 < VAR_4; VAR_18++)
  VAR_16->bitrate[VAR_18] = VAR_11[VAR_18];
 VAR_16->min_frag = VAR_7;
 VAR_16->max_frag = VAR_6;
 VAR_16->pm_capa = 0;
 VAR_16->we_version_compiled = VAR_9;
 VAR_16->we_version_source = 16;
 VAR_16->num_channels = 14;
 for (VAR_18 = 0, VAR_17 = 0; VAR_18 < 14; VAR_18++) {

  VAR_16->freq[VAR_17].i = VAR_18 + 1;
  VAR_16->freq[VAR_17].m = VAR_10[VAR_18] * 100000;
  VAR_16->freq[VAR_17].e = 1;
  VAR_17++;
  if (VAR_17 == VAR_5)
   break;
 }
 VAR_16->num_frequency = VAR_17;
 VAR_16->enc_capa = VAR_2 |
     VAR_3 |
     VAR_1 |
     VAR_0;
 return 0;
}
