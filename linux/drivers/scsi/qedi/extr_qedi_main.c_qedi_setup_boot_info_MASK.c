
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct qedi_ctx {int boot_kset; TYPE_1__* shost; } ;
struct iscsi_boot_kobj {int dummy; } ;
struct TYPE_3__ {int host_no; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct iscsi_boot_kobj* FUNC_0 (int ,int ,struct qedi_ctx*,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 struct iscsi_boot_kobj* FUNC_2 (int ,int ,struct qedi_ctx*,int ,int ,int ) ;
 struct iscsi_boot_kobj* FUNC_3 (int ,int,struct qedi_ctx*,int ,int ,int ) ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (struct qedi_ctx*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_8(struct qedi_ctx *VAR_10)
{
 struct iscsi_boot_kobj *VAR_11;

 if (FUNC_5(VAR_10))
  return -VAR_1;

 VAR_10->boot_kset = FUNC_1(VAR_10->shost->host_no);
 if (!VAR_10->boot_kset)
  goto kset_free;

 if (!FUNC_6(VAR_10->shost))
  goto kset_free;

 VAR_11 = FUNC_3(VAR_10->boot_kset, 0, VAR_10,
          VAR_7,
          VAR_9,
          VAR_2);
 if (!VAR_11)
  goto put_host;

 if (!FUNC_6(VAR_10->shost))
  goto kset_free;

 VAR_11 = FUNC_3(VAR_10->boot_kset, 1, VAR_10,
          VAR_8,
          VAR_9,
          VAR_2);
 if (!VAR_11)
  goto put_host;

 if (!FUNC_6(VAR_10->shost))
  goto kset_free;

 VAR_11 = FUNC_2(VAR_10->boot_kset, 0, VAR_10,
      VAR_6,
      VAR_4,
      VAR_2);
 if (!VAR_11)
  goto put_host;

 if (!FUNC_6(VAR_10->shost))
  goto kset_free;

 VAR_11 = FUNC_0(VAR_10->boot_kset, 0, VAR_10,
            VAR_5,
            VAR_3,
            VAR_2);
 if (!VAR_11)
  goto put_host;

 return 0;

put_host:
 FUNC_7(VAR_10->shost);
kset_free:
 FUNC_4(VAR_10->boot_kset);
 return -VAR_0;
}
