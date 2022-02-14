
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_query_region {int qr_node; int qr_numregions; char* qr_regions; int qr_namelen; int qr_domain; } ;
struct dlm_ctxt {int node_num; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (unsigned long*,int,int) ;
 int FUNC_1 (struct dlm_query_region*) ;
 struct dlm_query_region* FUNC_2 (int,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,char*,int,...) ;
 int FUNC_5 (int) ;
 int FUNC_6 (char*,int ) ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (int ,int ,struct dlm_query_region*,int,int,int*) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct dlm_ctxt *VAR_8, unsigned long *VAR_9)
{
 struct dlm_query_region *VAR_10 = ((void*)0);
 int VAR_11, VAR_12 = 0, VAR_13;
 char *VAR_14;

 if (FUNC_0(VAR_9, VAR_6, 0) >= VAR_6)
  goto bail;

 VAR_10 = FUNC_2(sizeof(struct dlm_query_region), VAR_3);
 if (!VAR_10) {
  VAR_12 = -VAR_2;
  FUNC_5(VAR_12);
  goto bail;
 }

 VAR_10->qr_node = VAR_8->node_num;
 VAR_10->qr_namelen = FUNC_9(VAR_8->name);
 FUNC_3(VAR_10->qr_domain, VAR_8->name, VAR_10->qr_namelen);

 if (FUNC_7())
  VAR_10->qr_numregions = FUNC_6(VAR_10->qr_regions,
        VAR_7);

 VAR_14 = VAR_10->qr_regions;
 for (VAR_13 = 0; VAR_13 < VAR_10->qr_numregions; ++VAR_13, VAR_14 += VAR_5)
  FUNC_4(0, "Region %.*s\n", VAR_5, VAR_14);

 VAR_13 = -1;
 while ((VAR_13 = FUNC_0(VAR_9, VAR_6,
      VAR_13 + 1)) < VAR_6) {
  if (VAR_13 == VAR_8->node_num)
   continue;

  FUNC_4(0, "Sending regions to node %d\n", VAR_13);

  VAR_12 = FUNC_8(VAR_1, VAR_0, VAR_10,
      sizeof(struct dlm_query_region),
      VAR_13, &VAR_11);
  if (VAR_12 >= 0)
   VAR_12 = VAR_11;
  if (VAR_12) {
   FUNC_4(VAR_4, "Region mismatch %d, node %d\n",
        VAR_12, VAR_13);
   break;
  }
 }

bail:
 FUNC_1(VAR_10);
 return VAR_12;
}
