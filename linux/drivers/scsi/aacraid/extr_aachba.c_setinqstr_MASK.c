
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_inq {char* vid; char* pid; char* prl; } ;
struct aac_supplement_adapter_info {scalar_t__* adapter_type_text; } ;
struct aac_driver_ident {char* vname; char* model; } ;
struct aac_dev {int cardtype; struct aac_supplement_adapter_info supplement_adapter_info; } ;


 int FUNC_0 (char**) ;
 int VAR_0 ;
 struct aac_driver_ident* FUNC_1 (int ) ;
 char** VAR_1 ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (scalar_t__*,int,int ) ;
 scalar_t__ FUNC_5 (char*,char*,int) ;
 int FUNC_6 (struct scsi_inq*,char,int) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void FUNC_8(struct aac_dev *VAR_2, void *VAR_3, int VAR_4)
{
 struct scsi_inq *VAR_5;
 struct aac_supplement_adapter_info *VAR_6;

 VAR_6 = &VAR_2->supplement_adapter_info;
 VAR_5 = (struct scsi_inq *)(VAR_3);
 FUNC_6(VAR_5, ' ', sizeof(*VAR_5));

 if (VAR_6->adapter_type_text[0]) {
  int VAR_7;
  char *VAR_8;
  char *VAR_9 = FUNC_4(VAR_6->adapter_type_text,
    sizeof(VAR_6->adapter_type_text),
        VAR_0);
  if (!VAR_9)
   return;

  VAR_8 = VAR_9;
  if ((VAR_8[0] == 'A') && (VAR_8[1] == 'O') && (VAR_8[2] == 'C'))
   FUNC_2("SMC", VAR_5->vid);
  else {
   VAR_7 = sizeof(VAR_5->vid);
   while (*VAR_8 && *VAR_8 != ' ' && --VAR_7)
    ++VAR_8;
   VAR_7 = *VAR_8;
   *VAR_8 = '\0';
   FUNC_2(VAR_9, VAR_5->vid);
   *VAR_8 = VAR_7;
   while (*VAR_8 && *VAR_8 != ' ')
    ++VAR_8;
  }
  while (*VAR_8 == ' ')
   ++VAR_8;

  if (FUNC_7(VAR_8) > sizeof(VAR_5->pid))
   VAR_8[sizeof(VAR_5->pid)] = '\0';
  FUNC_2 (VAR_8, VAR_5->pid);

  FUNC_3(VAR_9);
 } else {
  struct aac_driver_ident *VAR_10 = FUNC_1(VAR_2->cardtype);

  FUNC_2 (VAR_10->vname, VAR_5->vid);

  FUNC_2 (VAR_10->model, VAR_5->pid);
 }

 if (VAR_4 < FUNC_0(VAR_1)){
  char *VAR_11 = VAR_5->pid;

  for ( ; *VAR_11 != ' '; VAR_11++);

  if (FUNC_5(VAR_11-4, "RAID", 4) == 0)
   *(VAR_11 -= 4) = ' ';
  if (((VAR_11 - VAR_5->pid) + FUNC_7(VAR_1[VAR_4]))
   < (sizeof(VAR_5->pid) + sizeof(VAR_5->prl)))
   FUNC_2 (VAR_1[VAR_4], VAR_11 + 1);
 }
 FUNC_2 ("V1.0", VAR_5->prl);
}
