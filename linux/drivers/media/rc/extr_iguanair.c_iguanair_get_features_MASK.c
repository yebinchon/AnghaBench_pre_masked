
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iguanair {int version; int bufsize; int cycle_overhead; int dev; TYPE_2__* packet; } ;
struct TYPE_3__ {int cmd; int direction; scalar_t__ start; } ;
struct TYPE_4__ {TYPE_1__ header; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct iguanair*,int) ;

__attribute__((used)) static int FUNC_3(struct iguanair *VAR_7)
{
 int VAR_8;






 VAR_7->packet->header.start = 0;
 VAR_7->packet->header.direction = VAR_5;
 VAR_7->packet->header.cmd = VAR_4;
 FUNC_2(VAR_7, sizeof(VAR_7->packet->header));

 VAR_7->packet->header.cmd = VAR_3;
 VAR_8 = FUNC_2(VAR_7, sizeof(VAR_7->packet->header));
 if (VAR_8) {
  FUNC_1(VAR_7->dev, "failed to get version\n");
  goto out;
 }

 if (VAR_7->version < 0x205) {
  FUNC_0(VAR_7->dev, "firmware 0x%04x is too old\n", VAR_7->version);
  VAR_8 = -VAR_6;
  goto out;
 }

 VAR_7->bufsize = 150;
 VAR_7->cycle_overhead = 65;

 VAR_7->packet->header.cmd = VAR_1;

 VAR_8 = FUNC_2(VAR_7, sizeof(VAR_7->packet->header));
 if (VAR_8) {
  FUNC_1(VAR_7->dev, "failed to get buffer size\n");
  goto out;
 }

 if (VAR_7->bufsize > VAR_0) {
  FUNC_1(VAR_7->dev, "buffer size %u larger than expected\n",
        VAR_7->bufsize);
  VAR_7->bufsize = VAR_0;
 }

 VAR_7->packet->header.cmd = VAR_2;

 VAR_8 = FUNC_2(VAR_7, sizeof(VAR_7->packet->header));
 if (VAR_8)
  FUNC_1(VAR_7->dev, "failed to get features\n");
out:
 return VAR_8;
}
