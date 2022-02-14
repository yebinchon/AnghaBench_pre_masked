
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dlm_query_region {char* qr_regions; int qr_numregions; int qr_node; int qr_domain; } ;
struct dlm_ctxt {int node_num; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,char*,int,...) ;
 int FUNC_3 (char*,int ) ;
 scalar_t__ FUNC_4 () ;

__attribute__((used)) static int FUNC_5(struct dlm_ctxt *VAR_4,
        struct dlm_query_region *VAR_5,
        char *VAR_6, int VAR_7)
{
 char *VAR_8 = VAR_5->qr_regions;
 char *VAR_9, *VAR_10;
 int VAR_11, VAR_12, VAR_13, VAR_14;
 int VAR_15 = 0;

 if (!FUNC_4()) {
  if (VAR_5->qr_numregions) {
   FUNC_2(VAR_1, "Domain %s: Joining node %d has global "
        "heartbeat enabled but local node %d does not\n",
        VAR_5->qr_domain, VAR_5->qr_node, VAR_4->node_num);
   VAR_15 = -VAR_0;
  }
  goto bail;
 }

 if (FUNC_4() && !VAR_5->qr_numregions) {
  FUNC_2(VAR_1, "Domain %s: Local node %d has global "
       "heartbeat enabled but joining node %d does not\n",
       VAR_5->qr_domain, VAR_4->node_num, VAR_5->qr_node);
  VAR_15 = -VAR_0;
  goto bail;
 }

 VAR_10 = VAR_8;
 for (VAR_12 = 0; VAR_12 < VAR_5->qr_numregions; ++VAR_12) {
  FUNC_2(0, "Region %.*s\n", VAR_2, VAR_10);
  VAR_10 += VAR_2;
 }

 VAR_11 = FUNC_1(VAR_3, VAR_7/VAR_2);
 VAR_11 = FUNC_3(VAR_6, (u8)VAR_11);


 VAR_9 = VAR_6;
 for (VAR_12 = 0; VAR_12 < VAR_11; ++VAR_12) {
  VAR_14 = 0;
  VAR_10 = VAR_8;
  for (VAR_13 = 0; VAR_13 <= VAR_5->qr_numregions; ++VAR_13) {
   if (!FUNC_0(VAR_9, VAR_10, VAR_2)) {
    VAR_14 = 1;
    break;
   }
   VAR_10 += VAR_2;
  }
  if (!VAR_14) {
   VAR_15 = -VAR_0;
   FUNC_2(VAR_1, "Domain %s: Region '%.*s' registered "
        "in local node %d but not in joining node %d\n",
        VAR_5->qr_domain, VAR_2, VAR_9,
        VAR_4->node_num, VAR_5->qr_node);
   goto bail;
  }
  VAR_9 += VAR_2;
 }


 VAR_10 = VAR_8;
 for (VAR_12 = 0; VAR_12 < VAR_5->qr_numregions; ++VAR_12) {
  VAR_14 = 0;
  VAR_9 = VAR_6;
  for (VAR_13 = 0; VAR_13 < VAR_11; ++VAR_13) {
   if (!FUNC_0(VAR_10, VAR_9, VAR_2)) {
    VAR_14 = 1;
    break;
   }
   VAR_9 += VAR_2;
  }
  if (!VAR_14) {
   VAR_15 = -VAR_0;
   FUNC_2(VAR_1, "Domain %s: Region '%.*s' registered "
        "in joining node %d but not in local node %d\n",
        VAR_5->qr_domain, VAR_2, VAR_10,
        VAR_5->qr_node, VAR_4->node_num);
   goto bail;
  }
  VAR_10 += VAR_2;
 }

bail:
 return VAR_15;
}
