
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct rndis_device {int ndev; } ;
struct netvsc_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ type; scalar_t__ revision; scalar_t__ size; } ;
struct ndis_offload {TYPE_1__ header; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ndis_offload*,int ,int) ;
 int FUNC_1 (int ,char*,scalar_t__,...) ;
 int FUNC_2 (struct rndis_device*,struct netvsc_device*,int ,struct ndis_offload*,scalar_t__*) ;

__attribute__((used)) static int
FUNC_3(struct rndis_device *VAR_5, struct netvsc_device *VAR_6,
     struct ndis_offload *VAR_7)
{
 u32 VAR_8 = sizeof(*VAR_7);
 int VAR_9;

 FUNC_0(VAR_7, 0, sizeof(*VAR_7));

 VAR_9 = FUNC_2(VAR_5, VAR_6,
     VAR_4,
     VAR_7, &VAR_8);
 if (VAR_9)
  return VAR_9;

 if (VAR_7->header.type != VAR_1) {
  FUNC_1(VAR_5->ndev, "invalid NDIS objtype %#x\n",
       VAR_7->header.type);
  return -VAR_0;
 }

 if (VAR_7->header.revision < VAR_2) {
  FUNC_1(VAR_5->ndev, "invalid NDIS objrev %x\n",
       VAR_7->header.revision);
  return -VAR_0;
 }

 if (VAR_7->header.size > VAR_8 ||
     VAR_7->header.size < VAR_3) {
  FUNC_1(VAR_5->ndev,
       "invalid NDIS objsize %u, data size %u\n",
       VAR_7->header.size, VAR_8);
  return -VAR_0;
 }

 return 0;
}
