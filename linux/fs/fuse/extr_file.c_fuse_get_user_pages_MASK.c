
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct iov_iter {int dummy; } ;
struct TYPE_7__ {int in_pages; int out_pages; TYPE_2__* out_args; TYPE_1__* in_args; } ;
struct fuse_args_pages {unsigned int num_pages; TYPE_3__ args; TYPE_4__* descs; int * pages; } ;
typedef scalar_t__ ssize_t ;
struct TYPE_8__ {size_t offset; scalar_t__ length; } ;
struct TYPE_6__ {void* value; } ;
struct TYPE_5__ {void* value; } ;


 scalar_t__ VAR_0 ;
 size_t FUNC_0 (struct iov_iter*,size_t) ;
 unsigned long FUNC_1 (struct iov_iter*) ;
 int FUNC_2 (TYPE_4__*,size_t,unsigned int) ;
 int FUNC_3 (struct iov_iter*,scalar_t__) ;
 scalar_t__ FUNC_4 (struct iov_iter*,int *,size_t,unsigned int,size_t*) ;
 scalar_t__ FUNC_5 (struct iov_iter*) ;

__attribute__((used)) static int FUNC_6(struct fuse_args_pages *VAR_1, struct iov_iter *VAR_2,
          size_t *VAR_3, int VAR_4,
          unsigned int VAR_5)
{
 size_t VAR_6 = 0;
 ssize_t VAR_7 = 0;


 if (FUNC_5(VAR_2)) {
  unsigned long VAR_8 = FUNC_1(VAR_2);
  size_t VAR_9 = FUNC_0(VAR_2, *VAR_3);

  if (VAR_4)
   VAR_1->args.in_args[1].value = (void *) VAR_8;
  else
   VAR_1->args.out_args[0].value = (void *) VAR_8;

  FUNC_3(VAR_2, VAR_9);
  *VAR_3 = VAR_9;
  return 0;
 }

 while (VAR_6 < *VAR_3 && VAR_1->num_pages < VAR_5) {
  unsigned VAR_10;
  size_t VAR_11;
  VAR_7 = FUNC_4(VAR_2, &VAR_1->pages[VAR_1->num_pages],
     *VAR_3 - VAR_6,
     VAR_5 - VAR_1->num_pages,
     &VAR_11);
  if (VAR_7 < 0)
   break;

  FUNC_3(VAR_2, VAR_7);
  VAR_6 += VAR_7;

  VAR_7 += VAR_11;
  VAR_10 = (VAR_7 + VAR_0 - 1) / VAR_0;

  VAR_1->descs[VAR_1->num_pages].offset = VAR_11;
  FUNC_2(VAR_1->descs, VAR_1->num_pages, VAR_10);

  VAR_1->num_pages += VAR_10;
  VAR_1->descs[VAR_1->num_pages - 1].length -=
   (VAR_0 - VAR_7) & (VAR_0 - 1);
 }

 if (VAR_4)
  VAR_1->args.in_pages = 1;
 else
  VAR_1->args.out_pages = 1;

 *VAR_3 = VAR_6;

 return VAR_7 < 0 ? VAR_7 : 0;
}
