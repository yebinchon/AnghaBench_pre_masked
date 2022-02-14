
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u64 ;
struct ceph_options {int name; } ;
struct TYPE_9__ {void* iov_base; int iov_len; } ;
struct TYPE_8__ {void* front_len; void* compat_version; void* version; } ;
struct ceph_msg {TYPE_4__ front; TYPE_3__ hdr; } ;
struct ceph_mount_options {int server_path; } ;
struct ceph_mds_session_head {int seq; void* op; } ;
struct ceph_mds_client {char* nodename; TYPE_2__* fsc; } ;
struct TYPE_10__ {char* release; } ;
struct TYPE_7__ {struct ceph_mount_options* mount_options; TYPE_1__* client; } ;
struct TYPE_6__ {struct ceph_options* options; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void**,size_t const) ;
 struct ceph_msg* FUNC_1 (int ,int,int ,int) ;
 void* FUNC_2 (int) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (void**,void*) ;
 TYPE_5__* FUNC_6 () ;
 int FUNC_7 (void*,char const*,size_t const) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char const*) ;

__attribute__((used)) static struct ceph_msg *FUNC_10(struct ceph_mds_client *VAR_3, u64 VAR_4)
{
 struct ceph_msg *VAR_5;
 struct ceph_mds_session_head *VAR_6;
 int VAR_7 = -1;
 int VAR_8 = 0;
 int VAR_9 = 0;
 struct ceph_options *VAR_10 = VAR_3->fsc->client->options;
 struct ceph_mount_options *VAR_11 = VAR_3->fsc->mount_options;
 void *VAR_12, *VAR_13;

 const char* VAR_14[][2] = {
  {"hostname", VAR_3->nodename},
  {"kernel_version", FUNC_6()->release},
  {"entity_id", VAR_10->name ? : ""},
  {"root", VAR_11->server_path ? : "/"},
  {((void*)0), ((void*)0)}
 };


 VAR_8 = 4;
 for (VAR_7 = 0; VAR_14[VAR_7][0]; ++VAR_7) {
  VAR_8 += 8 + FUNC_9(VAR_14[VAR_7][0]) +
   FUNC_9(VAR_14[VAR_7][1]);
  VAR_9++;
 }

 VAR_8 += 4 + 8;


 VAR_5 = FUNC_1(VAR_0, sizeof(*VAR_6) + VAR_8,
      VAR_2, 0);
 if (!VAR_5) {
  FUNC_8("create_session_msg ENOMEM creating msg\n");
  return ((void*)0);
 }
 VAR_12 = VAR_5->front.iov_base;
 VAR_13 = VAR_12 + VAR_5->front.iov_len;

 VAR_6 = VAR_12;
 VAR_6->op = FUNC_3(VAR_1);
 VAR_6->seq = FUNC_4(VAR_4);







 VAR_5->hdr.version = FUNC_2(3);
 VAR_5->hdr.compat_version = FUNC_2(1);


 VAR_12 += sizeof(*VAR_6);


 FUNC_0(&VAR_12, VAR_9);


 for (VAR_7 = 0; VAR_14[VAR_7][0]; ++VAR_7) {
  size_t const VAR_15 = FUNC_9(VAR_14[VAR_7][0]);
  size_t const VAR_16 = FUNC_9(VAR_14[VAR_7][1]);

  FUNC_0(&VAR_12, VAR_15);
  FUNC_7(VAR_12, VAR_14[VAR_7][0], VAR_15);
  VAR_12 += VAR_15;
  FUNC_0(&VAR_12, VAR_16);
  FUNC_7(VAR_12, VAR_14[VAR_7][1], VAR_16);
  VAR_12 += VAR_16;
 }

 FUNC_5(&VAR_12, VAR_13);
 VAR_5->front.iov_len = VAR_12 - VAR_5->front.iov_base;
 VAR_5->hdr.front_len = FUNC_3(VAR_5->front.iov_len);

 return VAR_5;
}
