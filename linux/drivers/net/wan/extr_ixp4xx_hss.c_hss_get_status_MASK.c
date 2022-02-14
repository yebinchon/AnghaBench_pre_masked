
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct port {int id; int npe; } ;
struct msg {int data32; int hss_port; int cmd; } ;
typedef int msg ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (struct port*,struct msg*,char*) ;
 int FUNC_2 (struct msg*,int ,int) ;
 scalar_t__ FUNC_3 (int ,struct msg*,char*) ;
 int FUNC_4 (char*,int ) ;

__attribute__((used)) static u32 FUNC_5(struct port *VAR_1)
{
 struct msg VAR_2;

 FUNC_2(&VAR_2, 0, sizeof(VAR_2));
 VAR_2.cmd = VAR_0;
 VAR_2.hss_port = VAR_1->id;
 FUNC_1(VAR_1, &VAR_2, "PORT_ERROR_READ");
 if (FUNC_3(VAR_1->npe, &VAR_2, "PORT_ERROR_READ")) {
  FUNC_4("HSS-%i: unable to read HSS status\n", VAR_1->id);
  FUNC_0();
 }

 return VAR_2.data32;
}
