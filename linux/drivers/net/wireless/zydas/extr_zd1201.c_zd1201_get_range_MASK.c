
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct TYPE_2__ {int qual; int level; int noise; int updated; } ;
struct iw_range {int* encoding_size; int num_encoding_sizes; int num_bitrates; int* bitrate; int min_frag; int max_rts; scalar_t__ min_rts; int max_encoding_tokens; TYPE_1__ max_qual; void* we_version_source; void* we_version_compiled; } ;
struct iw_point {int length; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct iw_range*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_5,
    struct iw_request_info *VAR_6, struct iw_point *VAR_7, char *VAR_8)
{
 struct iw_range *VAR_9 = (struct iw_range *)VAR_8;

 VAR_7->length = sizeof(struct iw_range);
 FUNC_0(VAR_9, 0, sizeof(struct iw_range));
 VAR_9->we_version_compiled = VAR_0;
 VAR_9->we_version_source = VAR_0;

 VAR_9->max_qual.qual = 128;
 VAR_9->max_qual.level = 128;
 VAR_9->max_qual.noise = 128;
 VAR_9->max_qual.updated = 7;

 VAR_9->encoding_size[0] = 5;
 VAR_9->encoding_size[1] = 13;
 VAR_9->num_encoding_sizes = 2;
 VAR_9->max_encoding_tokens = VAR_3;

 VAR_9->num_bitrates = 4;
 VAR_9->bitrate[0] = 1000000;
 VAR_9->bitrate[1] = 2000000;
 VAR_9->bitrate[2] = 5500000;
 VAR_9->bitrate[3] = 11000000;

 VAR_9->min_rts = 0;
 VAR_9->min_frag = VAR_2;
 VAR_9->max_rts = VAR_4;
 VAR_9->min_frag = VAR_1;

 return 0;
}
