
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int unique; int hi; int lo; } ;
struct yfs_xdr_YFSFid {TYPE_2__ vnode; int volume; } ;
struct TYPE_3__ {void* unique; void* vnode_hi; void* vnode; void* vid; } ;
struct afs_callback_break {TYPE_1__ fid; } ;
struct afs_call {int unmarshall; int count; struct yfs_xdr_YFSFid* buffer; struct afs_callback_break* request; int tmp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (struct afs_call*,int ) ;
 int VAR_5 ;
 int FUNC_3 (struct afs_call*,int) ;
 int FUNC_4 (struct afs_call*,size_t) ;
 int FUNC_5 (struct afs_call*) ;
 int FUNC_6 (struct afs_call*) ;
 int FUNC_7 (struct afs_call*,int ) ;
 int VAR_6 ;
 int FUNC_8 (struct afs_call*,int ,int ) ;
 size_t FUNC_9 (int,int) ;
 struct afs_callback_break* FUNC_10 (int,int,int ) ;
 struct yfs_xdr_YFSFid* FUNC_11 (size_t,int ) ;
 void* FUNC_12 (int ) ;
 void* FUNC_13 (int ) ;

__attribute__((used)) static int FUNC_14(struct afs_call *VAR_7)
{
 struct afs_callback_break *VAR_8;
 struct yfs_xdr_YFSFid *VAR_9;
 size_t VAR_10;
 int VAR_11, VAR_12;

 FUNC_1("{%u}", VAR_7->unmarshall);

 switch (VAR_7->unmarshall) {
 case 0:
  FUNC_5(VAR_7);
  VAR_7->unmarshall++;



 case 1:
  FUNC_0("extract FID count");
  VAR_11 = FUNC_3(VAR_7, 1);
  if (VAR_11 < 0)
   return VAR_11;

  VAR_7->count = FUNC_12(VAR_7->tmp);
  FUNC_0("FID count: %u", VAR_7->count);
  if (VAR_7->count > VAR_4)
   return FUNC_8(VAR_7, -VAR_1,
        VAR_5);

  VAR_10 = FUNC_9(VAR_7->count, sizeof(struct yfs_xdr_YFSFid));
  VAR_7->buffer = FUNC_11(VAR_10, VAR_3);
  if (!VAR_7->buffer)
   return -VAR_2;
  FUNC_4(VAR_7, VAR_10);
  VAR_7->unmarshall++;


 case 2:
  FUNC_0("extract FID array");
  VAR_11 = FUNC_3(VAR_7, 0);
  if (VAR_11 < 0)
   return VAR_11;

  FUNC_0("unmarshall FID array");
  VAR_7->request = FUNC_10(VAR_7->count,
     sizeof(struct afs_callback_break),
     VAR_3);
  if (!VAR_7->request)
   return -VAR_2;

  VAR_8 = VAR_7->request;
  VAR_9 = VAR_7->buffer;
  for (VAR_12 = VAR_7->count; VAR_12 > 0; VAR_12--, VAR_8++) {
   VAR_8->fid.vid = FUNC_13(VAR_9->volume);
   VAR_8->fid.vnode = FUNC_13(VAR_9->vnode.lo);
   VAR_8->fid.vnode_hi = FUNC_12(VAR_9->vnode.hi);
   VAR_8->fid.unique = FUNC_12(VAR_9->vnode.unique);
   VAR_9++;
  }

  FUNC_5(VAR_7);
  VAR_7->unmarshall++;

 case 3:
  break;
 }

 if (!FUNC_2(VAR_7, VAR_0))
  return FUNC_7(VAR_7, VAR_6);




 return FUNC_6(VAR_7);
}
