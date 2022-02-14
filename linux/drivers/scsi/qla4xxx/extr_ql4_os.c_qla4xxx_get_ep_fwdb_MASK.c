
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct sockaddr_in6 {void* sin6_port; int sin6_addr; } ;
struct sockaddr_in {void* sin_port; int sin_addr; } ;
struct sockaddr {int sa_family; } ;
struct scsi_qla_host {int host; } ;
struct iscsi_endpoint {int dummy; } ;
struct dev_db_entry {int options; int port; int ip_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,int ) ;
 struct iscsi_endpoint* FUNC_3 (int ,struct sockaddr*,int ) ;
 int FUNC_4 (struct sockaddr_storage*) ;
 struct sockaddr_storage* FUNC_5 (int) ;

__attribute__((used)) static struct iscsi_endpoint *FUNC_6(struct scsi_qla_host *VAR_5,
     struct dev_db_entry *VAR_6)
{
 struct iscsi_endpoint *VAR_7;
 struct sockaddr_in *VAR_8;
 struct sockaddr_in6 *VAR_9;
 struct sockaddr *VAR_10;
 struct sockaddr_storage *VAR_11;
 char *VAR_12;


 VAR_11 = FUNC_5(sizeof(*VAR_11));
 if (!VAR_11)
  return ((void*)0);

 if (VAR_6->options & VAR_2) {
  VAR_10 = (struct sockaddr *)VAR_11;
  VAR_10->sa_family = VAR_1;
  VAR_9 = (struct sockaddr_in6 *)VAR_11;
  VAR_12 = (char *)&VAR_9->sin6_addr;
  FUNC_2(VAR_12, VAR_6->ip_addr, VAR_4);
  VAR_9->sin6_port = FUNC_0(FUNC_1(VAR_6->port));

 } else {
  VAR_10 = (struct sockaddr *)VAR_11;
  VAR_10->sa_family = VAR_0;
  VAR_8 = (struct sockaddr_in *)VAR_11;
  VAR_12 = (char *)&VAR_8->sin_addr;
  FUNC_2(VAR_12, VAR_6->ip_addr, VAR_3);
  VAR_8->sin_port = FUNC_0(FUNC_1(VAR_6->port));
 }

 VAR_7 = FUNC_3(VAR_5->host, (struct sockaddr *)VAR_11, 0);
 FUNC_4(VAR_11);
 return VAR_7;
}
