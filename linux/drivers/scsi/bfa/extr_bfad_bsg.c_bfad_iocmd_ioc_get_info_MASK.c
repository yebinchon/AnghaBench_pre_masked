
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct bfad_im_port_s* im_port; } ;
struct bfad_s {int pci_name; int port_name; int adapter_name; int bfad_lock; TYPE_1__ pport; int inst_no; int bfa; } ;
struct bfad_im_port_s {TYPE_2__* shost; } ;
struct bfa_port_attr_s {int factorypwwn; int factorynwwn; int pwwn; int nwwn; } ;
struct bfa_bsg_ioc_info_s {char* name; char* port_name; char* hwpath; char* adapter_hwpath; int status; int host; int bfad_num; int factorypwwn; int factorynwwn; int serialnum; int factory_mac; int mac; int ioc_type; int pwwn; int nwwn; } ;
struct TYPE_4__ {int host_no; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct bfa_port_attr_s*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (char*,int ) ;

__attribute__((used)) static int
FUNC_8(struct bfad_s *VAR_2, void *VAR_3)
{
 int VAR_4;
 struct bfa_bsg_ioc_info_s *VAR_5 = (struct bfa_bsg_ioc_info_s *)VAR_3;
 struct bfad_im_port_s *VAR_6;
 struct bfa_port_attr_s VAR_7;
 unsigned long VAR_8;

 FUNC_5(&VAR_2->bfad_lock, VAR_8);
 FUNC_0(&VAR_2->bfa, &VAR_7);
 VAR_5->nwwn = VAR_7.nwwn;
 VAR_5->pwwn = VAR_7.pwwn;
 VAR_5->ioc_type = FUNC_4(&VAR_2->bfa);
 VAR_5->mac = FUNC_2(&VAR_2->bfa);
 VAR_5->factory_mac = FUNC_3(&VAR_2->bfa);
 FUNC_1(&VAR_2->bfa, VAR_5->serialnum);
 VAR_5->factorynwwn = VAR_7.factorynwwn;
 VAR_5->factorypwwn = VAR_7.factorypwwn;
 VAR_5->bfad_num = VAR_2->inst_no;
 VAR_6 = VAR_2->pport.im_port;
 VAR_5->host = VAR_6->shost->host_no;
 FUNC_6(&VAR_2->bfad_lock, VAR_8);

 FUNC_7(VAR_5->name, VAR_2->adapter_name);
 FUNC_7(VAR_5->port_name, VAR_2->port_name);
 FUNC_7(VAR_5->hwpath, VAR_2->pci_name);


 FUNC_7(VAR_5->adapter_hwpath, VAR_2->pci_name);
 for (VAR_4 = 0; VAR_5->adapter_hwpath[VAR_4] != ':' && VAR_4 < VAR_1; VAR_4++)
  ;
 for (; VAR_5->adapter_hwpath[++VAR_4] != ':' && VAR_4 < VAR_1; )
  ;
 VAR_5->adapter_hwpath[VAR_4] = '\0';
 VAR_5->status = VAR_0;
 return 0;
}
