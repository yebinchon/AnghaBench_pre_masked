
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bio {int bi_status; scalar_t__ bi_private; } ;



__attribute__((used)) static bool FUNC_0(struct bio *VAR_0)
{
 return VAR_0->bi_private && !VAR_0->bi_status;
}
